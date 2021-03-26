#include <stdio.h>
#include<string.h>
#include <locale.h>

int main()
{
	setlocale(LC_CTYPE, "ptb");
	
	char srt1[10];
    char srt2[10];
    
    int i,j,aux=0;
	
	printf ("Digite uma palavra: ");
	fgets (srt1, 10, stdin);
	
		printf ("Digite até 10 letras:  ");
		fgets (srt2, 10, stdin);
		
			for (i=0; i < 10; i++){
				
				for (j=0; j<10; j++){
					
					if(srt1 [i] == srt2[j])
					{
					printf ("%s", srt1);	
					aux=1;
					}		
				}
			}
			
			if (aux == 0) printf ("Essa letra não existe na palavra");
			
}	
				
		




