#include <stdio.h>

int main()

{ 
	float vr, vgs, vt;
	
	const float vg = 0.1;
   
   printf ("Insira o valor comanda: ");	
   scanf ("%f", &vr);
   
   vgs= vr*vg;
   vt = vr+vgs;
   
   printf ("Servicos de Garcom: %.3f\n", vgs);
   
   printf ("Valor total: %.2f", vt);   
}
 
