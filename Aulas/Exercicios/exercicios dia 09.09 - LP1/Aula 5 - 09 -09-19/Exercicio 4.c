#include <stdio.h>

int main() {
	
	int num1, num2, valorImprimir, i;
	
	for (i = 0; i > -1; i++) {
			
		printf("Informe um numero positivo: ");
		scanf("%d", &num1);
		
		if(num1 > 0) break;
		}
		
	for (i = 0; i > -1; i++) {
			
			printf("Informe 0 ou 1: ");
			scanf("%d", &num2);
		
			if(num2 == 0 || num2 == 1) break;
	}
	
	if(num2 == 1) {
		
		valorImprimir = num1;
		
		for (i = 0; i <= num1; i++) {
	
		printf("%d\n", valorImprimir);
		valorImprimir--;
		
		}
		
	} else {
		
		valorImprimir = 0;
		
		for (i = 0; i <= num1; i++) {
	
		printf("%d\n", valorImprimir);
		valorImprimir++;
		
		}
	}
	
	
				
	
	
	return 0;
}

