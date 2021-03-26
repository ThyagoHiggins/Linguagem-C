#include <stdio.h>
#include <conio.h>

int main ()

{
	char letra; 
	
	printf ("Escreva uma letra do alfabeto: ");
	scanf("%c",&letra);

    if (letra>=65 && letra<=90){
     printf ("letra e maiuscula: ");	
	}else{
		printf ("Seu maiuscula e: %C",letra-32);
	}
			
	
	
	
	
	
	return 0;
	
}
