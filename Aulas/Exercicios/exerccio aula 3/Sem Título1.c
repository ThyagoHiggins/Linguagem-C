#include <stdio.h>

int main()
{

	float nota1, nota2, media;
	

		
	printf ("Escreva a nota 1: ");
	scanf ("%f" , &nota1);
	
	printf ("Escreva a nota 2: ");
	scanf ("%f", &nota2);
	
	media = (nota1+nota2)/2;
	
    printf ("A media do aluno eh: %f",media);
        
 
 if(media >= 6.0){
 	 	 printf ("Aprovado...");
		   }else{
	if(media >=4.0) {
		printf ("Recuperacao...");
		
	}else{
	
	 printf ("Reprovado...");
	 }
	  
    return 0;
}
}
