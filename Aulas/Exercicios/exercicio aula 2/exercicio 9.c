#include <stdio.h>

int main ()

{
	float qpiso, vpeca, metro;
	
	printf ("Insira o valor em m do local: ");
	scanf ("%f", &metro); 
	
	qpiso = metro/3.6;
	
	vpeca = qpiso*7;
	
	printf ("Quantidade de piso: %.2f\n",qpiso);
	printf ("valor da compra: %.2f",vpeca);
	
	return 0;
	
	}
