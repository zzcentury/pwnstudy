//flag{Thunk_c0des_xoR_thr3e_de4l}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char flag[100];
int key[] = {0x10,0x1A,0x17,0x11,0x0D,0x4F,0x73,0x5D,0x7A,0x70,0x29,78,18,67,71,14,0x29,0x1A,0x42,0x13,0x12,0x29,0x13,0x45,0x07,0x19,0x01,0x28,0x23,0x18,0x0F,0x0B};
void sub_08045236()
{
	printf("please input the flag:");
	scanf("%s",flag);
}

void sub_08048751()
{
	if(strlen(flag) != 32)
	{
		printf("worry.\n");
		exit(0);
	}
}

void sub_08048752()
{
	for(int i = 0;i < strlen(flag);i++)
		flag[i]^=0x76;
}

void sub_08048782()
{
	for(int i = 5;i <= 9;i++)
	{
		flag[i] ^= 0xAD;
		flag[i] = (2 * (flag[i]) & 0xAA |  (((flag[i]) & 0xAA) >> 1));
	}
}

void sub_08048778()
{
	for(int i = 11;i <= 15;i++)
	{
		flag[i] ^= 0x0E;
		flag[i] = (4 * (flag[i]) & 0xCC |  (((flag[i]) & 0xCC) >> 2));
	}
}

void sub_08048745()
{
	for(int i = 17,j = 30;i < j;i++,j--)
	{
		flag[i]^= (flag[j] + 1);
		flag[j]^=flag[i];
		flag[i]^=flag[j];
	}
}

void sub_080487E7()
{
    int i;
    for(i = 0;i < 32;i++)
    {
    	if((int)flag[i] != (int)key[i])break;
    }
    if(i == 32)printf("right.\n");
    else printf("worry.\n");
}

int main()
{
	fflush(stdin);
	setbuf(stdin, NULL);

	asm("jb label \n\t"
   		"jnb label \n\t"
   		".byte 0xE8 \n\t"
		"label:\n\t");

	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	sub_08045236();
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	sub_08048751();
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	sub_08048752();
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	sub_08048782();
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	sub_08048778();
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	sub_08048745();
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("inc %ecx \n\t"
		"dec %ecx \n\t");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	sub_080487E7();
	return 0;
}
