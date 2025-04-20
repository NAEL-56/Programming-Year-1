#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float raio;
	float altura;
	float volume;
	
	printf ("Digite o raio do cilindro: ");
	scanf ("%f", &raio);
	
	printf ("Digite a altura do cilindro: ");
	scanf ("%f", &altura);
	
	volume = raio*raio*altura*3.141593;
	
	printf ("\nVolume do cilindro: %f\n", volume);
	printf ("\n\n");
	
	system ("PAUSE");
	return 0;
}
