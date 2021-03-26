#define TAM 30
#define NLIVROS 3

typedef struct {
	
	char titulo[TAM];
	char autor[TAM];
	int npags;	
	
} Livro;

void recebeDadosLivros(Livro vet[], int tam);
void apresentaLivros(Livro vet[], int tam);
int somaPags(Livro vet[], int tam);

