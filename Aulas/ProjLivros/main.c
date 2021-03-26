#include <stdio.h>
#include <string.h>
#include "funcoes.h"

int main(){
	
	int i, j;
	Livro biblio[NLIVROS];

	recebeDadosLivros(biblio, NLIVROS);
	apresentaLivros(biblio, NLIVROS);
	
	printf("Total de pags cadastradas: %d\n", somaPags(biblio, NLIVROS));
	
	return 0;
	
	
}
