#include<stdio.h>
#include <locale.h>

int main()
{
    
    setlocale (LC_CTYPE, "ptb");
float salario, taxa,salarioL;

	printf ("Informe o sal�rio:  ");
	scanf ("%f", &salario);
	 
			if (salario < 1000){
				taxa = salario*0.05;
				salarioL = salario - taxa;
					printf ("Seu salario bruto �: %f\n Seu Salario Liquido � %f \n e o imposto a pagar � %f\n",salario,salarioL,taxa);
			
			}else{
				if (salario >= 1000 && salario < 5000){
					taxa = salario*0.11;
				salarioL = salario - taxa;
					printf ("Seu salario bruto �: %f\n Seu Salario Liquido � %f \n e o imposto a pagar � %f\n",salario,salarioL,taxa);
				}else{
					if (salario >= 5000){
					taxa = salario*0.35;
				salarioL = salario - taxa;
					printf ("Seu salario bruto �: %f\n Seu Salario Liquido � %f \n e o imposto a pagar � %f\n",salario,salarioL,taxa);
				}
		}	}




}
