#include <iostream>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>

int main()

{

int numero;

printf("Digite um numero inteiro: ");
scanf("%d", &numero);

if (numero<0) {printf("\n%d e negativo\n\n", numero);}
if (numero%2==0) {printf("%d e par\n\n", numero);}
    else {printf ("%d e impar\n\n", numero);}

system("pause");
return 0;

}
