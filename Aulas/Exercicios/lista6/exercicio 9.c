#include <stdio.h>
#include <locale.h>
int main ()
{
  setlocale (LC_CTYPE, "ptb");

  int x,y; 
  
  
  do{
  	
  
  	printf ("\n");
  	printf ("Escreva um n�mero: ");
  	scanf ("%d", &x);
  	
  	
  	printf ("Escreva outro n�mero: ");
  	scanf ("%d", &y);
  	printf ("\n");
  		
         
  }while (y>x);
  
  printf ("Ixi, n�o deu!!!");
  
  
  
return 0;   
  
}
