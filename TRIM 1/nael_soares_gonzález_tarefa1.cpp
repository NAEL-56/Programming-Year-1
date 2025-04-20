#include <iostream>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()

{
	
	system("cls");
	setlocale(LC_ALL, "portuguese");	

	int V[30], A, i, j, k, t;

	for(i=0;i<20;i++)							//Pegar 20 valores iniciais
	{
		printf("Digite o valor %d:	", i+1);
		scanf("%d", &V[i]);
		if(V[i]<0) 								//Prevenir para caso seja negativo
		{
			printf("\nDigite apenas valores positivos\n\n");
			i--;
		}
	}
	
	for(j=0;j<19;j++)							//Repetir leitura do vetor						
	{
		for(k=0;k<19;k++)						//Ler todo o vetor
		{
			if (V[k] > V[k+1])					//Alterar a ordem de duas células adjacentes, caso necessário
			{
				t = V[k+1];
				V[k+1] = V[k];
				V[k] = t;
			}
		}
		
	}
	
	printf("\nA ordem inicial é	");
	for(i=0;i<20;i++)							//Escrever ordem inicial
	{
		printf("%d ", V[i]);
	}
	printf("\n\n\n");
	
	for(j=0;j<10;j++)							//Repetir 10x
	{
		printf("Digite o valor %d: ", j+21);
		scanf("%d", &A);
		if(A<0)									//Prevenir para caso seja negativo
		{
			printf("\nDigite apenas valores positivos\n\n");
			j--;
		}
		else									//Continuar caso seja natural
		{
			for(k=0;k<21+j;k++)					//Percorrer vetor
			{
				if (A<V[k])						//Buscar posição correta
				{
					for(i=k;i<20+j;i++)			//Colocar em posição e deslocar o restante do vetor
					{
						t = V[i];
						V[i] = A;
						A = t;
					}
				}
			
				if (k==20+j)					//Colocar último valor do vetor
				{
					V[k] = A;
				}
	
			}
		
			printf("A nova ordem é		");
			for(i=0;i<21+j;i++)					//Exibir nova ordem
			{
				printf("%d ", V[i]);
			}
		
			printf("\n\n");
		}
	}
	
	printf("\nA ordem final é		");
		for(i=0;i<30;i++)						//Exibir ordem final
		{
			printf("%d ", V[i]);
		}
	
	printf("\n\n\n");
    system("PAUSE");
    return 0;

}
