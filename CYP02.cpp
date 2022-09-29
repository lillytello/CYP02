#include <stdio.h>

int main()
{
	int posicion, tamano, posicionHexa, tamHexa, c1, c2;
	c1 = 0000;
	c2 = 0000;
	scanf_s("%i", &tamano);
	scanf_s("%i", &posicion);

	tamHexa = tamano;
	posicionHexa = posicion;

	printf("%c%c%08X%04i%04i%08X", 66, 77, tamHexa, c1, c2, posicionHexa);
	return 0;


}