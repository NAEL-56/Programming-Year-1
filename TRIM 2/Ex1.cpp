#include <iostream>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main ()

{
	
	system("cls");
	setlocale(LC_ALL, "portuguese");	

	char s[32] = {' '}, nome[] = "ex1";
	int i;
	printf ("Digite alguma coisa, por favor:\n");
	gets(s);
	i=strlen(s)-1;
	
	FILE *gj;
	strcat("ex1", ".txt");
	gj=fopen(nome,"wt");

	for (;i>=0;i--)
	{
		fprintf(gj, "%c", s[i]);
	}

	printf("\n\n\n");
    system("PAUSE");
    return 0;

}
