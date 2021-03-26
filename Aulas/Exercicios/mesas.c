#include <stdio.h>

#define TAM 10

int main(){
	
	float mesas[TAM][TAM], auxfloat;
	int i, j, op, lin, col, auxint;
	
	// Laços para "zerar" as mesas
	for(i = 0; i < TAM; i++)
		for(j = 0; j < TAM; j++) mesas[i][j] = 0.0;
		
	// Do-while do menu	
	do{
		// Apresenta o menu na tela
		printf("Menu\n0 - Registrar valor em uma mesa\n1 - Ver conta de uma mesa\n2 - Pagar conta de uma mesa\n3 - Sair\n");
		printf("Entre com a opcao: ");
		
		// Recebe a opção do usuário, o do-while certifica que a opção entrada é válida
		do{
			scanf("%d", &op);
			if(op < 0 || op > 3) printf("Opcao invalida, entre novamente.\n");
			
		} while(op < 0 || op > 3);
		
		// Para todas as opções, exceto a 3, é preciso receber lin e col para identificar a mesa correta
		if(op != 3){
			
			printf("Entre com a linha e coluna da mesa (lin col): ");
			scanf("%d %d", &lin, &col);
			
		}
		
		// Switch-case das opções do menu
		switch (op){
			
			// Caso 0: registrar valor na mesa
			case 0:
				printf("Entre com o valor a ser registrado: ");
				scanf("%f", &auxfloat);
				mesas[lin][col] = mesas[lin][col] + auxfloat;
				
				break;
				
			// Caso 1: apresentar a conta atual da mesa
			case 1:
				printf("Conta atual da mesa [%d][%d] = %.2f\n", lin, col, mesas[lin][col]);
			
				break;

			// Caso 2: receber valor a ser pago para determinada mesa				
			case 2:
				printf("Entre com o valor a ser pago: ");
				scanf("%f", &auxfloat);
				mesas[lin][col] = mesas[lin][col] - auxfloat;
				if(mesas[lin][col] < 0){
					printf("Retornar R$%.2f de troco.", mesas[lin][col] * -1);
					mesas[lin][col] = 0.0;
				} 
				if(auxfloat - mesas[lin][col] == 0) printf("Mesa paga!");
				
				break;
			
			// Caso 3: finalizar, porém, é preciso checar se todas as mesas estão fechadas
			case 3:
				auxint = 0;
				for(i = 0; i < TAM; i++)
					for(j = 0; j < TAM; j++) 
						if(mesas[i][j] > 0.0){
							printf("Mesa [%d][%d] aberta...\n", i, j);
							auxint++;
						}
				
				if(auxint > 0) op = -1;
				
		}
		
		printf("\n\n");
		
	} while(op != 3);
	
	return 0;
}
