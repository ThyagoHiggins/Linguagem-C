#include <stdio.h>

int main()

{
	float raio, altura, vol;
	const float pi= 3.141592;
	
	printf ("informe o raio: ");
	scanf ("%f",&raio);
	
	printf ("informe o altura: ");
	scanf ("%f",&altura);
	
	vol = pi*altura*raio*raio;
	
	printf ("O volume do cilindro e:  %.2f", vol);
	
	return 0;
	
}
