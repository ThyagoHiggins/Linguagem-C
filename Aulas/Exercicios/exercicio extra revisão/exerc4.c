#include <stdio.h>


int main()
{
	// Var
		 
  int idade, i;
  float media;
  
  // inicio 
   
 	    
	    do {
	    	printf ("entre com uma idade: ");
	    
			scanf ("%d", &idade);
	    
			if (idade == 0) break;
			i++;
	    
			media=media+idade;	  	
	   	}
	   	
	   	while (1);
		   
		   printf ("numero de pessoas: %d", i);
		   printf ("media de idades são: %.2f", media/i);
	   	
	   	return 0; 
	   }

