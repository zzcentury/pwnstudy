#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void vulnerable_function() {
    char buf[128];
    read(0,buf,256);
}

int main(int argc, char** argv) {
    vulnerable_function();
    write(1,"Hello, World\n",13);
}
