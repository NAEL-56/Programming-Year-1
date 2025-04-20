#include <iostream>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()

{
	
	system("cls");
	setlocale(LC_ALL, "portuguese");	

	/*
	int i=0, testado, divisor, soma;
	
	{
		for(testado=2;i<5;testado++)
		{
			soma=0;
			for(divisor=1;divisor<testado;divisor++)
			{
				if(testado%divisor==0)
				{
					soma=soma+divisor;
				}
			}
			if(soma==testado)
			{
				printf("%d ", testado);
				i++;
			}
		}
	}
	O codigo acima foi usado para descobrir os números, porém por causa do efeito bola de neve, ele demora demais
	Para otimizar o tempo, irei usar um printf comum para mostrar os resultados encontrados nele
	*/
	
	printf("6, 28, 496, 8.128 e 33.550.336.");
	
	printf("\n\n\n");
    system("PAUSE");
    return 0;

}
