#include <stdio.h>

int main() {
	
	int numA, numB, numC, valor, divisiveis, conta, i, contagem;
	
	for(i = 0; i > -1; i++){
	
		printf("Informe o numero a: ");
		scanf("%d", &numA);
		printf("Informe o numero b: ");
		scanf("%d", &numB);
		printf("Informe o numero c: ");
		scanf("%d", &numC);
		
		if(numA > 1 && numB < numC) break;
	
	}
	
	contagem = numC - numB - 1;
	
	for(i = 0; i < contagem; i++){
		
		numB++;
		conta = numB % numA;
		
		if(conta == 0){
			divisiveis++;
		}
		
	}
	
	printf("Entre b e c existem %d numeros divisiveis por %d", divisiveis, numA);
}
