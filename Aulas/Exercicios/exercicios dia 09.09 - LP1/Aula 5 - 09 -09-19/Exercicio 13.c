#include <stdio.h>

void main(){
	
	int num1, i, tabuada, conta, resultado, acertou;
	
	acertou = 0;
	
	do{
		printf("Informe um numero entre 2 e 9 para ver a sua tabuada: ");
		scanf("%d", &num1);
		
		while(num1 < 2 || num1 > 9) {
			printf("Por favor, informe o numero corretamente: ");
			scanf("%d", &num1);
		}
		
	}while(num1 < 2 || num1 > 9);
	
	for(i = 0; i <= 10; i++){
		
		conta = num1 * i;
	
		printf("Informe o resultado da conta: %d X %d = ", num1, i);
		scanf("%d", &resultado);
		
			if(resultado != conta){
				printf("Voce errou a conta!");
				printf(" %d X %d e igual a %d.\n", num1, i, conta);
			}else {
				printf("Voce acertou a conta!\n");
				acertou++;
			}	
			
	}
	
	printf("Voce acertou %d contas.", acertou);
	
}
