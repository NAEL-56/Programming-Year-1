#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main (void) {

int a, b, c, d, e, f, g, h, decimal;

printf("Digite o valor de um numero binario: ");
scanf("%d, %d, %d, %d, %d, %d, %d, %d", &a, &b, &c, &d, &e, &f, &g, &h);

decimal=a*128+b*64+c*32+d*16+e*8+f*4+g*2+h;

printf("O equivalente decimal do numero lido e %d\n", decimal);

system("pause");
return 0;

}
