#include <stdio.h>

int main()
{
char s[10];
char *prt = s; //Aponta para o primeiro caracter de S//
int i;


	printf ("Coloque um conjunto de letras: ");
scanf ("%s",&s);

if (*prt == '\0')
return 0;

// Imprimir a string normalmente//

while (*prt !='\0')
	putchar (*prt++);
	
// imprimir a string ao contrário//
//não deu certo//

while (*prt >= s[0]) 
putchar  (*prt--);
	


}

