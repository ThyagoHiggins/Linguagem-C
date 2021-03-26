#include <stdio.h>
#include <locale.h>
int main()
{
  setlocale (LC_CTYPE, "ptb");
  
  int i=1, n, tabu, resp;
  
  printf ("Qual número você quer ver a tabuada?   ");
  scanf ("%d", &n);
  printf ("\n");
  while (n<2 || n>9){
  	
 	 printf ("Escreva um número entre 2 e 9   ");	
 	 scanf ("%d", &n); 	
     printf ("\n");
 }
  
  do {
  	tabu = n*i;
  	i = i+1;
   	printf (" %d X %d =\n %d",n,i);
    scanf ("%d", &resp);
	  
	  		if (resp = tabu){
   			printf ("Você acertou!\n");
			  }else{
			  	printf ("Você errou!\n");
			  };
  	
  }while (i<=10);
  
  
 
 
 
 
  
}
