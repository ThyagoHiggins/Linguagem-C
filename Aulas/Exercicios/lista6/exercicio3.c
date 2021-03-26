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
			
			while(n<0){
			printf("entre com o novo valor\n");
			scanf(" %d", &n);
			}
			
				}break;
	
	
			}while(n>0);
	printf(" valor aceito:\n");
	
	for (i=n;i>=-n;i--)
			{
        printf("%d\n",i);
			}
	
	return 0;
	
}
