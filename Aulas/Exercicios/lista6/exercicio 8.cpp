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
  	printf (" Voc� entrou com um n�mero importante que representa nada");
  	break;
  	
  	case 1: 
  	printf (" Esse valor em n�meros ordin�rios se chama primeiro");
  	break;
  	
    case 2: 
  	printf (" Esse n�mero faz parte de uma m�sica do castelo ra ti bum");
  	break;
  	
  	default: 
  	
  	 printf ("Vamos come�ar de novo!!!!");
 }
 
 }while (n1<0 || n1>2);
  
  	
  }
 
  


