#include <stdio.h>

int main()

{
	float m, cm;
	
	printf ("Insira o valor em centimetros: ");
	scanf("%f",&cm);
	
	m = cm/100;
	
	printf ( "O valor em metros �: %.2f",m);	
	return 0;
	
	
}

