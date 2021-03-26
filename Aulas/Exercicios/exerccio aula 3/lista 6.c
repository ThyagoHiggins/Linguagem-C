#include <stdio.h>

int main()
{
	int ano, bisexto, nbi;
	
	printf ( "Escrave ano em aaaa: ");
	scanf("%d", &ano);
	
	bisexto = ano%400;
	bisexto= ano%4;
	
	if(bisexto == 0) {printf("O este ano e bisexto");
	}else{
		printf ("este ano nao e bisexto");
		
	}	
	
	return 0;
	
}
