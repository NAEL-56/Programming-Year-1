#include <iostream>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()

{
	
	system("cls");
	setlocale(LC_ALL, "portuguese");	

	int a, b, divisor, contador, divisores;
	
	printf("Digite A: ");
	scanf("%d", &a);
	
	printf("Digite B: ");
	scanf("%d", &b);
	
		for (contador=a;contador<=b;contador++)
	{
			divisores=0;
			for (divisor=1; divisor<=contador;divisor++)
				{
				if (contador%divisor==0) divisores++;
				}
			if (divisores==2) printf("%d ", contador);
		
	}
	
	
	printf("\n\n");
    system("PAUSE");
    return 0;

}
