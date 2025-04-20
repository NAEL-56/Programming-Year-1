#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(void)
{
    system("cls");
    char op=0;
    while(1)
	{
		if(kbhit())
		{
			op=getch();
			if(op==0)
			{
				op=getch();
				if(op==59) printf("F1\n");
				if(op==60) printf("F2\n");
				if(op==61) printf("F3\n");
				if(op==62) printf("F4\n");
			}
			if(op==-32)
			{
				op=getch();
				if(op==72) printf("%c\n",24);
				if(op==75) printf("%c\n",27);
				if(op==77) printf("%c\n",26);
				if(op==80) printf("%c\n",25);
			}
			printf("%d -%c\n",op,op);
		}
		if(op==27) break;	
		if(op==13) system("cls");
	}    
    system("pause");
}


