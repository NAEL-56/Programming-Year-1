#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main (void) {

int anos, meses, dias, idade;

printf("Digite sua idade expressa em anos, meses e dias, respectivamente: ");
scanf("%d, %d, %d", &anos, &meses, &dias);

idade=365*anos+30*meses+dias;

printf("Voce tem %d dias de vida, sem contar os anos bissextos.\n\n", idade);

system("pause");
return 0;

}
