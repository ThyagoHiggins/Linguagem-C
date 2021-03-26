#include <stdio.h>
#include <locale.h>

int main()
{
	// Var
	setlocale(LC_CTYPE,"ptb");
	 
    int num, i, incremento; 



	//inicio
	 
	printf ("Informe o limite do intervalo: ");
	scanf ("%d", &num);
	
	printf ("Informe o incremento que deseja:  ");
	scanf ("%d", &incremento);
	
	if (num>0)
	{
	  for(i=0; i<=num; i= i + incremento)
		printf ( "%d\n ", i);
	
	}else{
		 printf ("Seu número tem que ser maior que 0!");
	}
	

 return 0;
}

