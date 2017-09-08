#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

#define MAX_MOON_SIZE 10

void getshell()
{
	system("/bin/sh");
}

struct moonagirl
{
	char name[0x10];
	void (*pf)(void * );
}*mo[MAX_MOON_SIZE];

void init()
{
   write(1, "\nplease make a choose.\n", strlen("\nplease make a choose.\n"));
   write(1, "1:create a moon\n", strlen("1:create a moon\n"));
   write(1, "2:delete a moon\n", strlen("2:delete a moon\n"));
   write(1, "3:edit a moon\n", strlen("3:edit a moon\n"));
   write(1, "4:show moons\n", strlen("4:show moons\n"));
   write(1, "5:exit\n", strlen("5:exit\n"));
}

int read_mbuf(char *buf, int length)
{
    char tmp_ch;
    int i;
    for(i=0; i<length; i++)
    {
        read(0, &tmp_ch, 1);
        if(tmp_ch == '\n')
            break;
        buf[i] = tmp_ch;
    }
    return i;
}

void create()
{
	for(int i=0; i<MAX_MOON_SIZE; i++)
    {
    	if(mo[i] == NULL)
    	{
            mo[i] = (struct moonagirl*)malloc(sizeof(struct moonagirl));
        	write(1, "the moon's name(no more than 16bit):", strlen("the moon's name(no more than 16bit):"));
        	read_mbuf(mo[i]->name,0x10);
        	mo[i]->pf = free;
        	break;
        }
    }
}

void mydelete()
{
	write(1, "which moon do you want to delete:", strlen("which moon do you want to delete:"));
	int flag;
	scanf("%d",&flag);
	if(flag >= 0 && flag <MAX_MOON_SIZE)
	{
			mo[flag] -> pf(mo[flag]);
	}
	else
    {
    	write(1, "moon's id is worry\n", strlen("moon's id is enough\n"));
    }
    write(1, "Delete Successfully\n", strlen("Delete Successfully\n"));
}

void edit()
{
	write(1, "which moon do you want to edit:", strlen("which moon do you want to edit:"));
	int flag;
	scanf("%d",&flag);
	if(flag >= 0 && flag <MAX_MOON_SIZE)
	{
			read_mbuf(mo[flag]->name,0x40);
	}
	else
    {
    	write(1, "moon's id is worry\n", strlen("moon's id is enough\n"));
    }

}

void myexit()
{
	for(int i;i < MAX_MOON_SIZE;i++)
	{
		if(mo[i] != NULL)
		{
			mo[i] -> pf(mo[i]);
		}
	}
	write(1, "happy end\n", strlen("happy end\n"));
	exit(1);
}

int get_choice()
{
    int tmp;
    char tmp_buf[10];
    int length = read_mbuf(tmp_buf, 6);
    if(length<=0)
        return -1;
    return atoi(tmp_buf);
}

void show()
{
	write(1, "which moon do you want to show:", strlen("which moon do you want to show:"));
	int flag;
	scanf("%d",&flag);
	if(flag >= 0 && flag <MAX_MOON_SIZE)
	{
			write(1, mo[flag]->name,16);
	}
	else
    {
    	write(1, "moon's id is worry\n", strlen("moon's id is enough\n"));
    }
}

void play()
{
	int choice;
	init();
	choice = get_choice();
	switch(choice)
    {
        case 1:
            create();
            break;
        case 2:
            mydelete();
            break;
        case 3:
            edit();
            break;
        case 4:
            show();
            break;
        case 5:
            myexit();
            break;
        default:
            write(1, "Sorry,Incorrect choice!\n", strlen("Sorry,Incorrect choice!\n"));
            break;
    }
}

int main()
{
    write(1, "Let us play a game of moon!\n", strlen("Let us play a game of moon!\n"));
    while(1)
        play();
    return 0;
}