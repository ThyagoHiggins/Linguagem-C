#include <stdio.h>
#include <locale.h>
int main ()
{
  setlocale (LC_CTYPE, "ptb");


 int x,y, soma, i=0; 
 
        printf ("Escreva um n�mero: ");
 		scanf ("%d", &x);
 		
 		printf ("Escreva  o outro n�mero: ");
 		scanf ("%d", &y);
 		
		 while (x>y){
		 
		 printf ("\n");	
		 	 
		 	 printf ("O primerio n�mero tem que ser menor que o segundo\n");
		 
		  printf ("\n");
		  
		  	printf ("Escreva um n�mero: ");
 			scanf ("%d", &x);
 		
 			printf ("Escreva  o outro n�mero: ");
 			scanf ("%d", &y);	
	
	}
	
       do {
       
	   x = x*2;
	   i++;	
     	
	    }while (x <= y);              	 
 
 
    printf ("O n�mero de calculos feitos foram %d", i);
      
 
return 0; 		
}
