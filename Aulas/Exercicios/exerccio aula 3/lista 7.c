#include <stdio.h>

int main()
{
	int n1,n2,n3,n4;
	printf("Escreva 4 numeros onde o primeiro seja maior que o segundo\n\n ");
	
	printf("Escreva o primeiro numero: ");
	scanf("%d", &n1);
	
	printf("Escreva segundo numero: ");
	scanf("%d", &n2);

	printf("Escreva terceiro numero: ");
	scanf("%d", &n3);

	printf("Escreva quarto numero: ");
	scanf("%d", &n4);
	
	if(n1>n2 && n3>n4 && (n3+n4)<(n1+n2)){
		printf("Parabens, voce acertou o enigma");
		}else{
	printf("Ahh! dessa vez não deu certo, comece de novo!:");
	}
	return 0;
	}
	

