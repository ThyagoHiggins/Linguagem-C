#include <stdio.h>
#include<string.h>
#include <locale.h>

int main ()
{
	setlocale(LC_CTYPE, "ptb");
	
		char srt[6];
	int i;
	
	printf ("Digite os caracteres: ");
	
		fgets (srt, 6, stdin);
		
			for (i=0; i<6; i++){
			
				if ((srt[i]<= 'z') && (srt[i]>= 'a'))
				{
					srt[i]= srt[i]-32;
					
				}
			
			}
			
			
				
				
				printf ("As letras em Maisculas é: %s ", srt);
				
return 0; 
}
	
	
	
	
	
	


	
	

