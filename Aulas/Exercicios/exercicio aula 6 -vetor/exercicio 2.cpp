#include <stdio.h>
#include <locale.h>
#define TAM 7


int main ()
{
    setlocale(LC_CTYPE, "ptb");
    
     float num[TAM], maior, menor, media,soma = 0;
	 int i;  
    
     
	  
   
    	for (i = 0; i < TAM; i++){
			
			printf ("Entre com o valor positivo: ");
			scanf ("%f", &num[i]);
		    
		  
		  if (i == 0){
		   menor = num [0];
	       maior = num [0];
		  }  
	   		    
				soma=soma+ num[i];
	    	
	  
	 			if (num [i] < menor){
	    		menor = num [i];
				}
	    
					if (num [i] > maior){
					maior = num [i];
					}   
 
 }
     		media = soma/7;
					
		printf ("A soma dos nº é: %.2f:\n ",soma);
		printf ("A média dos nº apresentados é: %.2f\n", media);
		printf ("O maior nº é: %.2f\n", maior);
		printf ("O menor nº é: %.2f\n", menor);						 

 return 0;
}
