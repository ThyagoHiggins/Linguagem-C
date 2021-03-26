#include <stdio.h>
#include <locale.h>
#define TAM 16


int main ()
{
    setlocale(LC_CTYPE, "ptb");
    
     float num[TAM], aux[8];
     int i; 
      
   
    	for (i = 0; i < TAM; i++){
					
			printf ("Entre com o valor positivo: ");
			scanf ("%f", &num[i]);
		
	}
		
	   for (i=0; i<TAM/2;i++){
	   	aux[i] = num[i];
	   	
	   }	
	  
	  for (i=0; i<TAM/2; i++){
	  num[i] = num[i+8];	
	  	
	  }
	   
	   for (i=0; i<TAM/2; i++){
	   num[i+8] = aux[i];	
	  	
	  }				
	    	
	       
		 printf("A ordem fica assim: %d\n %d\n ", num[i], aux[i]);			
}


