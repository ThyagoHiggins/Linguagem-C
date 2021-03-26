#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "ptb");
    
    
    

    int i,a,b,c, cont=0;
    
	
	printf (" Indique o 1º número: ");
   	 scanf ("%d", &a);
   
     printf (" Indique o 2º número: ");
   	 scanf ("%d", &b);
    
    	printf (" Indique o 3º número: ");
   	 	scanf ("%d", &c);
   	 	
	     
		for (i=b+1; i<c ;i++){
				
			if (i % a == 0)cont++;
  	}
	      
  printf (" Entre 2º e 3 º números existem %d\n divisiveis por %d", cont, a);


return 0;
   	 	
}

