# include<stdio.h>

int main() {
	
	int num1;
	
	do{
		printf("Informe um numero: ");
		scanf("%d", &num1);
		
		if(num1 % 2 == 0) printf("O numero %d e par.\n", num1);
			else printf("O numero %d e impar.", num1);
	
	} while(num1 % 2 == 0);
	
	return 0;
}
