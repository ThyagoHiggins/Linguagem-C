#include <stdio.h>
#include <locale.h>
int main ()
{
  setlocale (LC_CTYPE, "ptb");

  int n1, resultado;
  
 	     
	    do {
	    	printf ("Informe um n�mero:  ");
  			scanf ("%d", &n1);
			
			 resultado = n1%2;  
	    
			if (resultado == 0){
			printf ("O n�mero %d � par.\n\n", n1);
			}
		
	    	
			if (resultado != 0){
	    	printf ("O n�mero %d � impar!\n", n1);	
	    	printf ("finalizando programa....");
			}
		}while (resultado == 0);
   	   
 return 0;
}
