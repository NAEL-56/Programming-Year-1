#include <iostream>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>

int main()

{

	int nota;

    printf("Digite a nota do aluno: ");
	scanf("%d", &nota);

	if (nota<3) printf("\nConceito E\n\n");
    else if (nota<6) printf("\nConceito D\n\n");
         else if (nota<8) printf("\nConceito C\n\n");
              else if (nota<10) printf("\nConceito B\n\n");
                   else printf("\nConceito A\n\n");

	system ("PAUSE");
	return 0;

}
