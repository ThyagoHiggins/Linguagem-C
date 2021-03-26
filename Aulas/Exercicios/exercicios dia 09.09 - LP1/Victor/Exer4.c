#include <stdio.h>
#include <conio.h>

void main(){
	

	int numero,n,n2,numero1;
													printf("\n  Ola seja bem vindo escolha uma das opcao abaixo   ");
	printf("\n  1 para regredir   ");
	printf("\n  0 para progredir   ");
do {	
	printf("\n\n\n digite um valor  ");
	scanf("%d",&n);
	printf("\n digite a opcao  ");
	scanf("%d",&n2);



if(n2==0){


for(numero = 0; numero <= n ; numero++)
   {
	
	
		printf(" %d\n ",numero);
	

	
   }
   		}
   if(n2==1)
    {	
	
		for(numero = n; n >= 0; n--){

	printf(" %d\n ",n);
    }


	}
	}while(n2 != 0 && n2!= 1);	


return ;
}
