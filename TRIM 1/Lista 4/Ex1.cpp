#include <iostream>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()

{
		
	system("cls");
	setlocale(LC_ALL, "");	

	int a;
	
	for (a=1000; a<2000; a++)
	{
		if (a%11==5) {printf ("%d ",a);}
	}

	printf ("\n\n");

    system("PAUSE");
    return 0;

}
