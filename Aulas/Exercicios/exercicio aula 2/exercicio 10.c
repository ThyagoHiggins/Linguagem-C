#include <stdio.h>

int main ()

{
	float salariofixo, vendedor, valortotalv, totaldevendas, salariototal;
	const float pervendas = 0.0015; 
	
	printf ("Escreva o nome do vendedor:  ");
	
	scanf ("%d",&vendedor);
	
	
	printf ("Informe o Salário Fixo: ");
	
	scanf ("%f",&salariofixo);
	
	
	printf ("Informe o total de vendas: ");
	
	scanf ("%f",&totaldevendas);
	
	
	valortotalv= totaldevendas*pervendas;
	
	salariototal= valortotalv+salariofixo;
	
	printf ("vendedor: vendedor\n");
	
	printf ("Valor das vendas: %f\n",valortotalv);

	printf ("Salário Final sem desconto: %f\n",salariototal);
	
	return 0;
	
	
}
