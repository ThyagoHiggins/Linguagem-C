#include <stdio.h>
#include<string.h>
#include <locale.h>

int main()
{
	setlocale(LC_CTYPE, "ptb");

    char str1[10];
    char str2[10];
    
     printf ("Digite at� 10 letras para conjuto 1:");
    	fgets (str1, 10, stdin);
	 
	 printf("\n");
	 
	printf ("Digite novamente para conjunto 2:");
	fgets (str2, 10, stdin);
		 printf("\n");
	      printf("\n");
	printf (" O n�mero de caracteres digitados no Conj 1 � %d", strlen(str1)-1);
	printf("\n");
	printf (" O n�mero de caracteres digitados no Conj 2 � %d", strlen(str2)-1);
	 
	 printf("\n");
	 printf("\n");
	
		if (strlen(str1) > strlen(str2)){
		printf ("Logo, o Conjunto 1 � MAIOR\n");
		}
		
			if (strlen(str1) < strlen(str2)){
			printf ("Logo, o Conjunto 1 � MENOR");
			}
					
			if (strlen(str1) == strlen(str2)){
			}
			printf ("Logo, o Conjunto 1 e 2 s�o IGUAIS");
}
