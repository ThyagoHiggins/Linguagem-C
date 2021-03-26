#include <stdio.h>

int main ()

{
	int n1,n2,n3;
	
	printf ("Escreva tres numeros: \n\n\n");
	scanf ("%d", &n1);
		scanf ("%d", &n2);
			scanf ("%d", &n3);
			
  if (n1<n2 && n2<n3){
  	     printf ("A ordem crescente do numeros e: %d %d %d", n1,n2,n3);
}
  
  if (n1<n3 && n3<n2) { printf ("A ordem crescente do numeros e: %d %d %d", n1,n3,n2);
  }	    
  
    
  if (n2<n3 && n3<n1) {printf ("A ordem crescente do numeros e:  %d %d %d", n2,n3,n1);
  }	    
   
   
  if (n2<n1 && n1<n3) {   printf ("A ordem crescente do numeros e:  %d %d %d", n2,n1,n3);
}
  
  if (n3<n1 && n2<n1){ printf ("A ordem crescente do numeros e: %d %d %d", n3,n2,n1);
  }
  	    
     if (n3<n2 && n1<n2){printf ("A ordem crescente do numeros e:  %d %d %d", n3,n1,n2);
	 }
 	     

return 0;

 }
