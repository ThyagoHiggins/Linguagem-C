#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "ptb");
    
    
    

    int i,a,b,c, cont=0;
    
	
	printf (" Indique o 1� n�mero: ");
   	 scanf ("%d", &a);
   
     printf (" Indique o 2� n�mero: ");
   	 scanf ("%d", &b);
    
    	printf (" Indique o 3� n�mero: ");
   	 	scanf ("%d", &c);
   	 	
	     
		for (i=b+1; i<c ;i++){
				
			if (i % a == 0)cont++;
  	}
	      
  printf (" Entre 2� e 3 � n�meros existem %d\n divisiveis por %d", cont, a);


return 0;
   	 	
}

