#include <stdio.h>

int main()

{
	float salario, horastra, salarioparcial,vimposto;
	const float valorhora = 50;
	const float imposto = 0.08;
	
	printf ("Informe a hora total trabalhada: ");
	
	scanf ("%f", &horastra);
	
	salarioparcial = horastra*valorhora;
	
	vimposto = salarioparcial*imposto;
	
	salario = salarioparcial-vimposto;
	
	printf ("Salario Bruto: %.2f",salarioparcial);
	
	printf ("Desconto de imposto: %.2f\n",vimposto);
	
	printf ("Seu salario será: %.2f", salario);
	
	return 0;
	
	
}
