#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main (void) {

char piloto [9];
float distancia, tempo, velocidademedia;

printf("Digite o nome do piloto: ");
gets(piloto);

printf("Digite a distancia percorrida em km: ");
scanf("%f", &distancia);

printf("Digite o tempo levado em horas: ");
scanf("%f", &tempo);

velocidademedia=distancia/tempo;

printf("A velocidade média do %s foi %f km/h.\n\n", piloto, velocidademedia);

system("pause");
return 0;
}
