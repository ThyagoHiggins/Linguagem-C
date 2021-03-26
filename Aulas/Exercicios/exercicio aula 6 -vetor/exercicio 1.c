#include <stdio.h>
#include <locale.h>
#define TAM 10


int main ()
{
    setlocale(LC_CTYPE, "ptb");
	float nums[TAM];
	int i; 

   	
			for (i = 0; i < TAM; i++){
			
			printf ("Entre com o valor positivo: ");
			scanf ("%f", &nums[i] );
			}		
		
				for (i = 0; i < TAM; i++){
				printf ("A ordem é: %.1f\n", nums [i]);
				}
			printf ("-------------------------------------");	
				for (i = 10; i >=0; i--){
				printf ("A ordem é: %.1f\n", nums [i]);
				}


}		
				
	     
		

		
			
			
			


