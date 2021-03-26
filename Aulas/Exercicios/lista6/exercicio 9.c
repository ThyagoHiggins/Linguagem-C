#include <stdio.h>
#include <locale.h>
int main ()
{
  setlocale (LC_CTYPE, "ptb");

  int x,y; 
  
  
  do{
  	
  
  	printf ("\n");
  	printf ("Escreva um número: ");
  	scanf ("%d", &x);
  	
  	
  	printf ("Escreva outro número: ");
  	scanf ("%d", &y);
  	printf ("\n");
  		
         
  }while (y>x);
  
  printf ("Ixi, não deu!!!");
  
  
  
return 0;   
  
}
