#include <stdio.h>
#include <locale.h>
int main ()
{
  setlocale (LC_CTYPE, "ptb");
 
 int n1;
 
 do{
  printf (" Entre com um valor entre 0 e 2: ");
  scanf ("%d", &n1);
  
    
	
 	switch (n1){
  	
  		
  	case 0: 
  	printf (" Você entrou com um número importante que representa nada");
  	break;
  	
  	case 1: 
  	printf (" Esse valor em números ordinários se chama primeiro");
  	break;
  	
    case 2: 
  	printf (" Esse número faz parte de uma música do castelo ra ti bum");
  	break;
  	
  	default: 
  	
  	 printf ("Vamos começar de novo!!!!");
 }
 
 }while (n1<0 || n1>2);
  
  	
  }
 
  


