#include <stdio.h>
#include <locale.h>
int main()
{
  setlocale (LC_CTYPE, "ptb");
  
  int i=1, n, tabu;
  
  printf ("Qual n�mero voc� quer ver a tabuada?   ");
  scanf ("%d", &n);
  printf ("\n");
  while (n<2 || n>9){
  	
 	 printf ("Escreva um n�mero entre 2 e 9   ");	
 	 scanf ("%d", &n); 	
     printf ("\n");
 }
  
  do {
  	tabu = n*i;
  	
  	printf (" %d X %d = %d\n", n,i,tabu);
  	i = i+1;
  }while (i<=10);
  
  
 
 
 
 
  
}
