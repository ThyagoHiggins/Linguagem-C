#include <stdio.h>
#include<string.h>
#include <locale.h>

int main()
{
	setlocale(LC_CTYPE, "ptb");
   
   char str1[10];
   char str2[10];
   char medida;
   
    printf ("Digite até 10 letras no conjuto 1:");
	fgets (str1, 10, stdin);
	
	printf ("Digite novamente para conjunto 2:");
	fgets (str2, 10, stdin);
	  	
  		medida = strcmp (str1,str2);
  		printf ("%d", medida);
	  
	  	if (medida > 0){
	  		printf ("Conjunto 1 MENOR que Conjunto 2");
	  	}
	  	 
	  	 if (medida < 0){
	  		printf ("Conjunto 1 MAIOR que Conjunto 2");
	  	}
	  	
	  	if (medida == 0){
	  		printf ("Conjuntos IGUAIS");
	  	}
}
 


		 


