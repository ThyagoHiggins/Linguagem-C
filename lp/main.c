// Thyago Arthur Higgins Domingues BP 3008657
// Gabriel da Silva Camargo BP 3007642

#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#include "funcao.h"



 int main ()
{
	setlocale (LC_CTYPE, "ptb"); // Permite a visualização de informações em portugues//

	int opcaoMenu1, opcaoMenu2, i,cont;
	candidato dados;
    vaga vet[10];
  
    carregadadosarquivo (vet);
	


do{
	
	printf("\n0 - Iniciar o programa\n1 - Finalizar o programa\n");
	scanf("%d", &opcaoMenu1);
	verificaopcao1(opcaoMenu1);
	
	if (opcaoMenu1 == 0){
			do{
				printf("\n0 - Entrar com idade");
				printf("\n1 - Entrar com o sexo");
				printf("\n2 - Entrar com a pretensão salarial");
				printf("\n3 - Entrar com o nível de escolaridade;");
				printf("\n4 - Buscar vaga");
				printf("\n5 - Quantidade de vagas disponíveis");
				printf("\n6 - Voltar ao menu anterior\n");
				scanf("%d", &opcaoMenu2);
		        verificaopcao2(opcaoMenu2);
		
		system ("cls");
			switch (opcaoMenu2)
			{
    
			case 0: 
		 
		   dados = carregadados(0);
		   exibedadosdocand(dados);
		
        	break;
			
			case 1: 
		 
		   dados = carregadados(1);
		   exibedadosdocand(dados);
        	break;
        	
        	case 2: 
		   
		   dados = carregadados(2);
		   exibedadosdocand(dados);
        	break;
        	
           case 3: 
		   
		   dados = carregadados(3);
		   exibedadosdocand(dados);
        	break;
        	
           case 4:
           buscar_vaga (dados,vet);
           break;
           
           case 5:
           printf("\n\n VEJA AS VAGAS DISPONÍVEL:\n\n");
	
	for(i = 0; i < 5; i++){
		printf("%s\n%s\n%c\n%d\n%d\n%f\n%d\n\n", vet[i].cargo, vet[i].nivel, vet[i].sexo, vet[i].idadeMin, vet[i].idadeMax, vet[i].salario, vet[i].nvagas);
	}
           
           }
					
		
	    
		}while (opcaoMenu2 != 6);
    }
}while(opcaoMenu1 != 1);
printf ("VOCÊ OPTOU POR TERMINAR O PROGRAMA");  

}
		



