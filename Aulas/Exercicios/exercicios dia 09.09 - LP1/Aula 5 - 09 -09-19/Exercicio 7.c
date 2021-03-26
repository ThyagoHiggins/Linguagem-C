#include <stdio.h>

int main() {
	
	int num1, num2, contador;
	
	printf("Informe dois numeros\n");
	printf("Informe o primeiro numero: ");
	scanf("%d", &num1);
	printf("Informe o segundo numero: ");
	scanf("%d", &num2);
	
	if(num1 < num2){
		
	}
	do{
		num1 = num1 * 2;
		contador++;
	}while(num1 < num2);
	
	printf("%d", contador);
	
	
}


