#include <stdio.h>
#include <conio.h>

int main ()

{ 

float a,b,resultado;
char sinal;

printf ("insira dois numeros: ");
scanf ("%f",&a);
scanf ("%f",&b);

printf ("insira a operacao: ");
scanf (" %c",&sinal);

switch (sinal){
	case '+' :
		(resultado = a+b);
		break
		
		case '-' :
		resultado= a-b;
		break
		
		case '*' :
		resultado= a*b;
		break
		
		case '/' :
		resultado= a/b;
		break
		
		default:
			printf ("opção invalida");
			
}
 
      printf("Resultado: %f", resultado);
return 0;

		 
}
