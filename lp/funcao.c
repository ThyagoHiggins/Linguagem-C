#include <stdio.h>
#include <string.h>
#include "funcao.h"

void verificaopcao1 (int x)
{
	if(x != 1 && x != 0)
		{
		printf("Op��o inv�lida, entre novamente.\n");
		printf("--------------------------------------\n");
		}

	
}

void verificaopcao2 (int y)
{
	if(y != 0 && y != 6)
		{
		printf("Op��o inv�lida, entre novamente.\n");
		printf("--------------------------------------\n");
		}

}


candidato carregadados (int x )
{
	
	candidato p;
	
	switch (x)
	{
	    case 0:
		
		
		
			printf("Qual a sua idade: ");
			scanf("%d",&p.idadedocand);
			
			fflush(stdin);
			
			printf ("Para uma busca detalhada informe...");
				
			printf ("Informe o sexo: ");
			scanf("%c",&p.sexodocand);
			
			fflush(stdin);
			 
			printf ("Informe a prentens�o Salarial: ");
			scanf("%f",&p.salariodocand);
			
			fflush(stdin);
		
			printf("Indique sua escolaridade: ");
			printf ("\n");
			printf("\n0 - fundamental completo\n1 - ensino m�dio completo\n2 - superior completo\n");
			scanf("%d", &p.ensinodocand);
			
			fflush(stdin);
			
			return p;                     
				 		
		break;
		
		case 1:
		
			printf ("Informe o sexo: ");
			scanf("%s",&p.sexodocand);
						
			fflush(stdin);
			
			printf ("Para uma busca detalhada informe...\n");
						
			printf("Qual a sua idade: ");
			scanf("%d",&p.idadedocand);
		
			fflush(stdin);
			 
			printf ("Informe a prentens�o Salarial: ");
			scanf("%f",&p.salariodocand);
			
			fflush(stdin);
		
			printf("Indique sua escolaridade: ");
			printf ("\n");
			printf("\n0 - fundamental completo\n1 - ensino m�dio completo\n2 - superior completo\n");
			scanf("%d", &p.ensinodocand);
			
			fflush(stdin);
			
			return p;                     
				 		
		break;
		
		case 2:
		
			printf ("Informe a prentens�o Salarial: ");
			scanf("%f",&p.salariodocand);
						
			fflush(stdin);
			
			printf ("Para uma busca detalhada informe...");
						
			printf("Qual a sua idade: ");
			scanf("%d",&p.idadedocand);
		
			fflush(stdin);
			 
			printf ("Informe o sexo: ");
			scanf("%c",&p.sexodocand);
			fflush(stdin);
		
			printf("Indique sua escolaridade: ");
			printf ("\n");
			printf("\n0 - fundamental completo\n1 - ensino m�dio completo\n2 - superior completo\n");
			scanf("%d", &p.ensinodocand);
			
			fflush(stdin);
			
			return p;                     
				 		
		break;
		
		case 3:
		
			printf("Indique sua escolaridade: ");
			printf ("\n");
			printf("\n0 - fundamental completo\n1 - ensino m�dio completo\n2 - superior completo\n");
			scanf("%d", &p.ensinodocand);
							
			fflush(stdin);
			
			printf ("Para uma busca detalhada informe...");
						
			printf("Qual a sua idade: ");
			scanf("%d",&p.idadedocand);
		
			fflush(stdin);
			 
			printf ("Informe o sexo: ");
			scanf("%c",&p.sexodocand);
			fflush(stdin);
		
		    printf ("Informe a prentens�o Salarial: ");
			scanf("%f",&p.salariodocand);
			
			fflush(stdin);
			
			return p; 
		
	}
	
}

void exibedadosdocand (candidato p)
{
	    printf("A idade informada � %d\n",p.idadedocand);
        printf ("Voc� � do sexo %c\n",p.sexodocand);
 		printf("Sua prentens�o salarial � %.2f\n",p.salariodocand);
 		printf("Seu nivel escolhar � %d\n",p.ensinodocand);
 		
	
}
int carregadadosarquivo (vaga *v)
{
	FILE *arq;
	int i, j, k, cont;
	char aux[25];
	char aux2[15];
	int nint;
	float nfloat;
	
if((arq = fopen("vagas.txt", "r")) == NULL) return 1;
	
	// O c�digo abaixo l� o arquivo linha a linha
	i = 0;
	cont = 0;
	
	// O fgets l� uma linha do arquivo e testa se n�o � retonado NULL, o que significaria que chegou no final do arquivo
	while((fgets(aux, sizeof(aux), arq) != NULL)){

		// Como a linha foi lida em aux com sucesso, � preciso atribuir o conte�do no campo certo da struct
		// A primeira leitura � do "cargo"
		k = 0;
		// O while � para retirar o \n no final da string e colocar o \0 no lugar
		while(aux[k] != '\n') k++;
		aux[k] = '\0';
		strncpy(v[i].cargo, aux, sizeof(v[i].cargo));
		printf ("%c", v[i].cargo);		
		// Repete o processo anterior para para n�vel de escolaridade 
		fgets(aux, sizeof(aux), arq);
		k = 0;
		while(aux[k] != '\n') k++;
		aux[k] = '\0';
		strncpy(v[i].nivel, aux, sizeof(v[i].nivel));
		printf ("%c", v[i].nivel);			
		// Repete para o sexo
		fgets(aux, sizeof(aux), arq);
		k = 0;
		while(aux[k] != '\n') k++;
		aux[k] = '\0';
		// Como sempre � um char, a atribui��o pode ser direta
		v[i].sexo = aux[0];
		printf ("%c", v[i].sexo);			
		// Foi lido como string, convertido para inteiro e atribu�do
		// Idade m�nima
		fgets(aux, sizeof(aux), arq);
		k = 0;
		while(aux[k] != '\n') k++;
		aux[k] = '\0';
		v[i].idadeMin = atoi(aux);
		printf ("%d", v[i].idadeMin);			
		// Idem anterior, agora para idade m�xima
		fgets(aux, sizeof(aux), arq);
		k = 0;
		while(aux[k] != '\n') k++;
		aux[k] = '\0';
		v[i].idadeMax = atoi(aux);
		printf ("%d", v[i].idadeMax);			
		// Idem idades, mas agora um float para sal�rio
		fgets(aux, sizeof(aux), arq);
		k = 0;
		while(aux[k] != '\n') k++;
		aux[k] = '\0';
		v[i].salario = atof(aux);
		printf ("%.2f", v[i].salario);		
		// Idem leitura das idades, mas agora para n�mero de vagas para aquele cargo
		fgets(aux, sizeof(aux), arq);
		k = 0;
		while(aux[k] != '\n') k++;
		aux[k] = '\0';
		v[i].nvagas = atoi(aux);
		printf ("%d", v[i].nvagas);				
		// Insere a linha em branco entre os cargos
		printf("\n");
		fgets(aux, sizeof(aux), arq);
		cont++;
		i++;
		
	}
	
	fclose(arq);

	
	
}

 int buscar_vaga (candidato c,vaga *v)
 {
    if (c.ensinodocand == NULL && c.idadedocand == 0 && c.salariodocand == 0 && c.sexodocand == NULL){
    	
     printf ("Voc� n�o informou dados minimo necess�rios para realizar uma busca");
     printf ("Tente novamente");
}
 	
 	
 	
 	
 }
	
