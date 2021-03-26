#include <stdio.h>

int main() {
	
	int num1, valorImprimir, contagem j, i;
	
	for (j = 0; j > -1; j++) {
			
		printf("Informe um numero positivo: ");
		scanf("%d", &num1);
		valorImprimir = num1;
		contagem = num1 * 2;
	
		if(num1 > 0) break;
		}
				
	for (i = 0; i <= contagem; i++) {
	
	printf("%d\n", valorImprimir);
	valorImprimir--;
		
	}
	
	return 0;
}

