#include <stdio.h>

int main ()

{	float n1,n2;
	
	printf ("Escreva dois valores: \n\n ");
	scanf ("%f", &n1);
	scanf ("%f", &n2);
	
	if (n1>n2){
		printf ("O valor maior e: %.2f",n1);
		}else{
		printf ("Valor maior e: %.2f",n2);
		}
		
		return 0;
}

		


