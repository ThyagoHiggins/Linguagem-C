#include <stdio.h>

void main() {
	
	int num1, i;
	
	do{
	
		printf("Informe um numero: ");
		scanf("%d", &num1);
	 
		for(i = 0; i < num1; i++){
			printf("%d\n", num1);
		}
		
	}while(num1 < 500);
	
}
