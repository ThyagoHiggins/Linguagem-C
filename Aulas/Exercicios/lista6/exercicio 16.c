#include <stdio.h>
#include <locale.h>
#include <conio.h>
int main()
{
  setlocale (LC_CTYPE, "ptb");
  
 char letra;
 
  do{  
  	printf ("Escreva uma letra: ");
    letra = getche();
    printf ("\n");
   
   
  }while(letra != 'z' && letra != 'Z');  	


	
 
 return 0;
 
}
