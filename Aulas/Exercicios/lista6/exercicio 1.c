#include <stdio.h>
int main ()
{

	int n,i;
	
	
		printf ("Coloque somente numero positivo: ");
		
		do{
	
		scanf("%d", &n);
		
		if(n<0){
			printf("O numero deve ser positivo:\n");
			printf("entre com o novo valor\n");
			scanf(" %d", &n);
			
				}break;
	
			}while(n>0);
	
	for (i=0;i<n;i++){
        printf("%d\n",n);
	
		}
	
	return 0;
	
}
