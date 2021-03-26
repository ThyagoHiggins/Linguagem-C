#include <stdio.h>

int main ()
{

int n1, teste;

	printf ("Escreva um numero: ");
	scanf ("%d", &n1);

	teste = n1%2;

	if (teste == 0){ printf ("seu numero e par");
	}else{ printf("seu numero e impar");
	}
	
	return 0;
}

