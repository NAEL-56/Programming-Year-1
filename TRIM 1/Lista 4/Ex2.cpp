#include <iostream>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()

{
	
	system("cls");
	setlocale(LC_ALL, "portuguese");	

	int i, t, menor, maior;
	float media=0;
	
	for(i=0;i<50;i++)
	{
		printf("Digite o valor %d: ", i+1);
		scanf("%d", &t);
		if (i<0)
		{
			printf("Apenas valores positivos");
			i--;
		}
		else
		{
			if (i==0)
			{
				menor=t;
				maior=t;
			}
			else
			{
				if (t<menor) {menor = t;}
				if (t>maior) {maior = t;}
			}
			media = media+t;
		}
	}
	
	media = media/50;
	printf("\n\nMenor valor: %d\nMaior valor: %d\nMedia: %f\n\n", menor, maior, media);

    system("PAUSE");
    return 0;

}
