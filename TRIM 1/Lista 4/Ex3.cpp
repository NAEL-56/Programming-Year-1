#include <iostream>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()

{
	
	system("cls");
	setlocale(LC_ALL, "portuguese");	

	int x, y, i, contador;

	for(i=0;i<1;i++)
	{
		printf("Digite X: ");
		scanf("%d", &x);
		if (x<0)
		{
			printf("Apenas valores positivos");
			i--;
		}
	}

	for(i=0;i<1;i++)
	{
		printf("Digite Y: ");
		scanf("%d", &y);
		if (y<0)
		{
			printf("Apenas valores positivos");
			i--;
		}
	}

	for (contador=x+1;contador<y;contador++)
	{
		if (contador%2==0) {printf("%d ",contador);}
	}
	printf("\n\n");
    system("PAUSE");
    return 0;

}
