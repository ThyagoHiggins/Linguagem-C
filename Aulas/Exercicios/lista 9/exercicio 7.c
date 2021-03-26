#include <stdio.h>
#include<string.h>
#include <locale.h>

int main()
{
	setlocale(LC_CTYPE, "ptb");

        char srt[10];
		char aux;
		int i, len;
		
		printf ("Digite até 10 letras: ");
    	fgets (srt, 10, stdin);
    	
    	for (i=0, len = strlen (srt)-1; i < len; i++, len--)
    	{
    		aux = srt[i];
			srt[i]= srt[len];
			srt[len] = aux;
		}
		printf ("%s",srt);

}



