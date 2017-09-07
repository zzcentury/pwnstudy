#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

void getshell(){ 
   system("/bin/sh");
}

int main()
{
    char m_buf[64];
    memset(m_buf, 0, 64);
    write(1, "first\n", strlen("first\n"));	
    read(0, m_buf, 256);
    write(1, m_buf, strlen(m_buf));
    write(1, "seconed\n", strlen("seconed\n"));
    read(0, m_buf, 256);
    return 0;
}
