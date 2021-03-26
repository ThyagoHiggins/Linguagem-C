#include <stdio.h>

void main(){
	
	int num1, num2;
	
	printf("Informe um valor: ");
	scanf("%d", &num1);
	
	do{
		printf("informe outro valor: ");
		scanf("%d", &num2);
	}while(num1 > num2);
	
}
