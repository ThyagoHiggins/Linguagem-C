#include <stdio.h>
int strlen (char *s){
	char *prt =s; // Guardar o endere�o inicial//
	while (*s != '\0')// Enquanto n�o chegarmos ao final//
	s++; //incrementa o ponteiro//
	
	return (int) (s-prt ); // Retornar a diferen�a entre os endere�os//
}


int main()
{
char s[10];
char *prt = s; //Aponta para o primeiro caracter de S//



	


// Inicio do programa//

	printf ("Coloque uma string:  ");
	gets(s);
	
	printf ("%d\n", strlen(s));
	
}
