#include <stdio.h>
#include <locale.h>
#define TAM 16


int main ()
{
    setlocale(LC_CTYPE, "ptb");
    
     float num[TAM];
     int i, aux; 
      
   
    	for (i = 0; i < TAM; i++){
					
			printf ("Entre com o valor positivo: ");
			scanf ("%f", &num[i]);
	 
	}
		
			for (i=0; i<TAM/2;i++){
			aux = num[i];
	   	}
	   			 for (i=0; i<TAM/2; i++){
	        	 num[i] = num[i+8];
	   		    }
	   				for (i=0; i<TAM/2; i++){
	            	num[i+8] = aux;
	           		}	

	       		
   			
	       
		
 printf("A ordem fica assim: %d\n %d\n ", num[i], aux);		

return 0;

}
