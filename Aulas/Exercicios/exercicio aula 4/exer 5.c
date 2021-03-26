#include <stdio.h>
#include <conio.h>

int main ()

{
	char letra; 
	
	
	printf ("Escreva uma letra do alfabeto: ");
	letra=getche();
	
	if (letra>=65 && letra<=90){
     printf ("\nA letra minuscula e : %C",letra+32); 
     
 }else{
	printf("A letra maiscula e: %c", letra-32); }
	 	
	
		
	return 0;
	
}
