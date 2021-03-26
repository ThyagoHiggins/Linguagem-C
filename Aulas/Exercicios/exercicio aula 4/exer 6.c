#include <stdio.h>

int main ()

{
	float n1,n2;
	char op;
	
   printf("Escreva um numero: ");
	scanf ("%f",&n1);
	
	printf ("Escreva outro numero: ");
	scanf ("%f",&n2);
	
	printf ("Indique a operação: ");
	scanf (" %c",&op);
	
	if (op == '+'){
		printf ("resultado: %f", n1+n2);	
			}else{
				if (op == '-')
				{printf ("resultado: %f", n1-n2); 
					}else{
						if (op == '*')
						{printf ("resultado: %f", n1*n2);
							}else{
								if (op == '/')
								 {	printf ("resultado: %f", n1/n2);		
								 }
										
						}
					}
			}
	

	
	return 0;
}
