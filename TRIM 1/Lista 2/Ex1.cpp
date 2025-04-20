#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	float a;
	float b;
	float c;
	float trapezio;
	float quadrado;
	float cubo;
	
	printf ("Digite o valor da base maior do trapezio: ");
	scanf ("%f", &a);
	
	printf ("Digite o valor da base menor do trapezio ou do lado do quadrado: ");
	scanf ("%f", &b);
	
	printf ("Digite o valor da altura do trapezio ou da aresta do cubo: ");
	scanf ("%f", &c);
	
	trapezio = a*(b+c)/2;
	quadrado = (b*b);
	cubo = 6*c*c;
	
	printf ("\nO valor da area do trapezio e %f\n", trapezio);
	printf ("\nO valor da area do quadrado e %f\n", quadrado);
	printf ("\nO valor da area da superficie do cubo e %f\n", cubo);
	printf ("\n\n");
	
	system ("PAUSE");
	return 0;
}
