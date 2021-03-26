#include <stdio.h>

int main() {
	
	int valor;
	
	do{
		printf("Informe um valor entre 0 e 2: ");
		scanf("%d", &valor);
		
	switch(valor){
		
		case 0:
			printf("O numero informado foi o numero 0");
			break;
		case 1:
			printf("O numero informado foi o numero 1");
			break;
		case 2:
			printf("O numero informado foi o numero 2");
			break;
		default:
			printf("O numero informado nao foi nenhum numero entre 0 e 2\n.");
	}
	
	}while(valor < 0 || valor > 2);
}
