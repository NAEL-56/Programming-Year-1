#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main (void) {

char vendedor [33];
float salariofixo, vendas, percentual, salariototal;

printf ("Digite o nome do vendedor: ");
gets (vendedor);

printf ("Digite o salario fixo do vendedor: ");
scanf ("%f", &salariofixo);

printf ("Digite o valor total das vendas do vendedor: ");
scanf ("%f", &vendas);

printf ("Digite o ganho percentual do funcionario sobre as vendas: ");
scanf ("%f", &percentual);

salariototal=salariofixo+percentual*vendas/100;

printf("\n\n O salario final de %s deve ser %f\n\n",  vendedor, salariototal);

system("pause");
return 0;
}
