#include <stdio.h>

int main()

{
	float n1,n2,n3,n4,n5, media;
	
	printf ("Escreva a nota 1:  ");
	scanf ("%f",&n1);
	
	printf ("Escreva a nota 2:  ");
	scanf ("%f",&n2);
	
	printf ("Escreva a nota 3:  ");
	scanf ("%f",&n3);
	
	printf ("Escreva a nota 4:  ");
	scanf ("%f",&n4);
	
	printf ("Escreva a nota 5:  ");
	scanf ("%f",&n5);
	
	media= (n1+n2+n3+n4+n5)/5;
	
	printf ("Sua media e: %.2f ",media);
	
	return 0;
	
	
}
