#include <stdio.h>
#include <string.h>
#include "funcoes.h"

void recebeDadosLivros(Livro vet[], int tam){
	int i, j;
	
	for(i = 0; i < tam; i++){
		
	    printf("%d Titulo: ", i);
	    fgets(vet[i].titulo, sizeof(vet[i].titulo), stdin);
	    
	    j = -1;
	    do{
	    	j++;
			if(vet[i].titulo[j] == '\n') vet[i].titulo[j] = '\0';
		}while(vet[i].titulo[j] != '\0');
	    
	    fflush(stdin);
	    
	    printf("%d Autor: ", i);
	    fgets(vet[i].autor, sizeof(vet[i].autor), stdin);
	    
	    j = -1;
	    do{
	    	j++;
			if(vet[i].autor[j] == '\n') vet[i].autor[j] = '\0';
		}while(vet[i].autor[j] != '\0');
	    
	    fflush(stdin);
	    
	    printf("%d N pags: ", i);
	    scanf("%d", &vet[i].npags);
	    fflush(stdin);
	    
	    printf("\n\n");
	}
	
}

void apresentaLivros(Livro vet[], int tam){
	int i;
	for(i = 0; i < tam; i++){
	
		printf("Titulo: %s\nAutor: %s\nN pags: %d\n\n", vet[i].titulo, vet[i].autor, vet[i].npags);
	
	}	
	
}

int somaPags(Livro vet[], int tam){
	int soma = 0, i;
	
	for(i = 0; i < tam; i++) soma = soma + vet[i].npags;
	
	return soma;
}


