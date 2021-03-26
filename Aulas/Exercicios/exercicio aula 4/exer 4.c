#include <stdio.h>
#include <conio.h>

int main ()

{
	char letra; 
	
	printf ("Escreva uma letra do alfabeto: ");
	scanf("%c",&letra);

  	 if (letra>=65 && letra<=90){
     printf ("A letra minuscula: %C",letra+32); 
 }else{
	printf(" Atencao!!!!!!!!!! letra minuscula "); }
	 	
	return 0;
	
}
