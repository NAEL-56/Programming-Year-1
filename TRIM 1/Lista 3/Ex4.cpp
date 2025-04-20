#include <iostream>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>

int main ()

{

    float a, b, c, maior, medio, menor;

    printf("Digite tres valores, separados por virgula: ");
    scanf("%f, %f, %f", &a, &b, &c);

    maior = a >= b ? (a >= c ? a : c) : (b >= c ? b : c) ;
    medio = a >= b ? (a <= c ? a : (b >= c ? b : c) ) : (b <= c ? c : b) ;
    menor = a <= b ? (a <= c ? a : c) : (b <= c ? b : c) ;

    printf("O maior valor e %f\n\n", maior);

    system("PAUSE");
    return 0;

}
