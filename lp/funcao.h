#ifndef FUNCAO_H_INCLUDED
#define FUNCAO_H_INCLUDED

typedef struct {
	char cargo[20];
	char nivel[20];
	char sexo;
	int idadeMin;
	int idadeMax;
	float salario;
	int nvagas;
	
}vaga;


typedef struct
{
	int ensinodocand;
	char sexodocand;
	int  idadedocand;
	float salariodocand;
}candidato;


void verificaopcao1 (int x);
void verificaopcao2 (int y);
candidato carregadados (int x );
void exibedadosdocand (candidato p);
void buscavagas(candidato b);
int carregadadosarquivo (vet);
int buscar_vaga (dados,vet);

#endif // FUNCOES_H_INCLUDED
