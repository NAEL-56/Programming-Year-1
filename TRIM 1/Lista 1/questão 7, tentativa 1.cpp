#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int x=1, y=2, z=3, a;

if (x<y) { 
	if (x<z) a=x;
	else a=z;}
else {
		if (y<z) { 
			a = y; 
		}
		else { 
			a = z; }
}
printf("%d", a);
	return (0);
}
