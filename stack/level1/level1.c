#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void getshell(){
    system("/bin/sh");
}

void game(){
    char buffer[0x10] = {0};
    printf("Can you getshell?\n");
    read(0, buffer, 0x40);
}

int main(){
    setvbuf(stdout, NULL, _IOLBF, 0);
    game();
    return 0;
}
