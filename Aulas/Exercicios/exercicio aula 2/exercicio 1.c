#include <stdio.h>

int main ()

{
	int num1, num2, soma, sub, mult;
	float divi;
	
	printf ("Entre com primeiro numero: ");
	
	scanf ( "%d", &num1);
	
    printf ("Entre com segundo numero: ");
	
	scanf ( "%d", &num2);
	
	// Operações que serão exibidas.
	soma=num1+num2;
	sub=num1-num2;
	mult=num1*num2;
	divi=num1/num2;
	
		printf ("soma= %d\n",soma);
	    printf ("sub= %d\n",sub);
	    printf ("mult= %d\n",mult);
	    printf ("divi= %.3f\n",divi);
	    
	return 0; 
}
