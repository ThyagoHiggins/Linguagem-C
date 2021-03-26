#include <stdio.h>


// Protótipo da função//
void troca (int *a, int *b);



// Inicio do Programa//
int main()
{
	int n,k;
	puts ("Informe dois nº");
	scanf("%d %d", &n, &k);
	
	printf ("Antes da troca n = %d e k = %d \n", n,k);
	troca(&n, &k);
	
	printf ("Depois da troca n = %d e k = %d \n", n,k);
	
}


// Estrutura da função//

void troca (int *a, int *b)
{
	int temp;
	
	
	temp = *a;
	*a = *b;
	*b = temp;
	
}
