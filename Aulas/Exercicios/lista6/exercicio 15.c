#include <stdio.h>
#include <locale.h>
#include <conio.h>
int main()
{
  setlocale (LC_CTYPE, "ptb");
  
 char letra;
 
 while(letra != 'z'){
 printf ("Escreva uma letra: ");
 letra = getche();
 printf ("\n");
}
 
 return 0;
 
}
 
 
  
