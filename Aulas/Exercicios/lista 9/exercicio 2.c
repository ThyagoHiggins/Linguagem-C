#include <stdio.h>
#include<string.h>
#include <locale.h>

int main ()
{
	setlocale(LC_CTYPE, "ptb");
	
		char srt[10];
		char letra;
	int i, aux=0;
	
	printf ("Digite uma palavra: ");
	fgets (srt, 10, stdin);
	
	printf ("digite uma letra:  ");
	scanf("%c",&letra);
		
			for (i=0; i<10; i++){
			
				if(srt[i] == letra)
			{
			printf ("posição %d\n", i);	
			aux=1;
			}
			
						
			
			}	
				
			if (aux == 0) printf ("Essa letra não existe na palavra");
				
			
				
			
				
return 0; 
}
