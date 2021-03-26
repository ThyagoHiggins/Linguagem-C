#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
	char cargo[20];
	char nivel[20];
	char sexo;
	int idadeMin;
	int idadeMax;
	float salario;
	int nvagas;
	
}vaga;

int main(){
	
	FILE *arq;
	int i, j, k, cont;
	char aux[25];
	char aux2[15];
	int nint;
	float nfloat;
	
	vaga vet[10];
	
	
	if((arq = fopen("arqOriginal.txt", "r")) == NULL) return 1;
	
	// O código abaixo lê o arquivo linha a linha
	i = 0;
	cont = 0;
	
	// O fgets lê uma linha do arquivo e testa se não é retonado NULL, o que significaria que chegou no final do arquivo
	while((fgets(aux, sizeof(aux), arq) != NULL)){

		// Como a linha foi lida em aux com sucesso, é preciso atribuir o conteúdo no campo certo da struct
		// A primeira leitura é do "cargo"
		k = 0;
		// O while é para retirar o \n no final da string e colocar o \0 no lugar
		while(aux[k] != '\n') k++;
		aux[k] = '\0';
		strncpy(vet[i].cargo, aux, sizeof(vet[i].cargo));
				
		// Repete o processo anterior para para nível de escolaridade 
		fgets(aux, sizeof(aux), arq);
		k = 0;
		while(aux[k] != '\n') k++;
		aux[k] = '\0';
		strncpy(vet[i].nivel, aux, sizeof(vet[i].nivel));
				
		// Repete para o sexo
		fgets(aux, sizeof(aux), arq);
		k = 0;
		while(aux[k] != '\n') k++;
		aux[k] = '\0';
		// Como sempre é um char, a atribuição pode ser direta
		vet[i].sexo = aux[0];
				
		// Foi lido como string, convertido para inteiro e atribuído
		// Idade mínima
		fgets(aux, sizeof(aux), arq);
		k = 0;
		while(aux[k] != '\n') k++;
		aux[k] = '\0';
		vet[i].idadeMin = atoi(aux);
				
		// Idem anterior, agora para idade máxima
		fgets(aux, sizeof(aux), arq);
		k = 0;
		while(aux[k] != '\n') k++;
		aux[k] = '\0';
		vet[i].idadeMax = atoi(aux);
				
		// Idem idades, mas agora um float para salário
		fgets(aux, sizeof(aux), arq);
		k = 0;
		while(aux[k] != '\n') k++;
		aux[k] = '\0';
		vet[i].salario = atof(aux);
				
		// Idem leitura das idades, mas agora para número de vagas para aquele cargo
		fgets(aux, sizeof(aux), arq);
		k = 0;
		while(aux[k] != '\n') k++;
		aux[k] = '\0';
		vet[i].nvagas = atoi(aux);
					
		// Insere a linha em branco entre os cargos
		printf("\n");
		fgets(aux, sizeof(aux), arq);
		cont++;
		i++;
		
	}
	
	fclose(arq);
	
	printf("\n\nConteudo no vetor:\n\n");
	
	for(i = 0; i < cont; i++){
		printf("%s\n%s\n%c\n%d\n%d\n%f\n%d\n\n", vet[i].cargo, vet[i].nivel, vet[i].sexo, vet[i].idadeMin, vet[i].idadeMax, vet[i].salario, vet[i].nvagas);
	}
	
	//Abrindo o novo arquivo
	if((arq = fopen("arqNovo.txt", "w")) == NULL){
		return 1;
	}
	
	// Reescrevendo o arquivo com fprintf
	for(i = 0; i < cont; i++){
		
		fprintf(arq, "%s\n", vet[i].cargo);
		fprintf(arq, "%s\n", vet[i].nivel);
		fprintf(arq, "%c\n", vet[i].sexo);
		fprintf(arq, "%d\n", vet[i].idadeMin);
		fprintf(arq, "%d\n", vet[i].idadeMax);
		fprintf(arq, "%f\n", vet[i].salario);
		fprintf(arq, "%d\n", vet[i].nvagas);
		fputs("\n", arq);
		
	}
	
	fclose(arq);
	
	return 0;
	
}

