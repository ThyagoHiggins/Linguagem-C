#include <stdio.h>

int main ()

{
 float quilolatao,vc,vz;
 const float cobre = 0.7, zinco = 0.3;
 
 printf ("Informe o kg do latao:  ");

	scanf ("%f", &quilolatao); 

	vc= cobre*quilolatao;
	vz= zinco*quilolatao;
	
	printf ("valor de cobre necessario: %.2f\n", vc);
	printf ("valor de zinco necessario: %.2f", vz);
 
 	return 0; 	
}
