#include <stdio.h>
int main ()
{

	int n1,n2,i;
	
	
		printf ("Coloque um valor  ");
		scanf ("%d",&n1);
		
		
		
	do{
		printf ("Coloque 1 ou 0:   ");
		scanf ("%d",&n2);
		
		if(n2!=1 && n2!=0)
			printf("O numero deve ser 1 ou 0");
				
	}while (n2!=1 && n2!=0);
			
		printf(" valor aceito:\n");		
	 
	 	if(n2==1){
	      for (i=n1;i>=0;i--){
		    printf("%d\n",i);
          }
		} else {
		     for (i=0;i<=n1;i++)
			 {
        		printf("%d\n",i);
			 }
		   }
							
	 		
			
	
	return 0;
}
