#include <stdio.h>
#include <locale.h>
int main ()
{
  setlocale (LC_CTYPE, "ptb");

  int n1, resultado;
  
 	     
	    do {
	    	printf ("Informe um número:  ");
  			scanf ("%d", &n1);
			
			 resultado = n1%2;  
	    
			if (resultado == 0){
			printf ("O número %d é par.\n\n", n1);
			}
		
	    	
			if (resultado != 0){
	    	printf ("O número %d é impar!\n", n1);	
	    	printf ("finalizando programa....");
			}
		}while (resultado == 0);
   	   
 return 0;
}
