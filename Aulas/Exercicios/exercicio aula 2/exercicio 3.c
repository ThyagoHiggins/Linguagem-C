#include <stdio.h>

int main()

{
	float m, cm;
	
	printf ("Insira o valor em metros: ");
	scanf("%f",&m);
	
	cm = m*100;
	
	printf ( "O valor em cm é: %.2f",cm);	
	return 0;
	
	
}

