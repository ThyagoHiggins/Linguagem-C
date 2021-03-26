#include <stdio.h>
#include <locale.h>
int main ()
{
  setlocale (LC_CTYPE, "ptb");


 int x,y, soma, i=0; 
 
        printf ("Escreva um número: ");
 		scanf ("%d", &x);
 		
 		printf ("Escreva  o outro número: ");
 		scanf ("%d", &y);
 		
		 while (x>y){
		 
		 printf ("\n");	
		 	 
		 	 printf ("O primerio número tem que ser menor que o segundo\n");
		 
		  printf ("\n");
		  
		  	printf ("Escreva um número: ");
 			scanf ("%d", &x);
 		
 			printf ("Escreva  o outro número: ");
 			scanf ("%d", &y);	
	
	}
	
       do {
       
	   x = x*2;
	   i++;	
     	
	    }while (x <= y);              	 
 
 
    printf ("O número de calculos feitos foram %d", i);
      
 
return 0; 		
}
