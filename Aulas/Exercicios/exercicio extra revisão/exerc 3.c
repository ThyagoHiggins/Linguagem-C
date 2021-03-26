#include <stdio.h>


int main()
{
	// Var
		 
    int  i;
	char alf;
	
	printf ("Escreva uma letra: ");
	scanf("%c", &alf);
	
	
	if ((alf <= 'a') && (alf >= 'z'))	{
		
		for (i=alf; i<= 'z'; i++)
	
	   printf ("%c\n",i);
		
		
	}else{
		 printf (" EI, entre com uma letra minuscula");
		
	}
	
	   
	  return 0;		
		
	}
	
	 
    
    
