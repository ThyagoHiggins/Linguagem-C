//Nome: Gabriel da Silva Camargo. Prontu�rio: BP3007642.
//Nome: Thyago Arthur Higgins Domingues. Prontu�rio: BP3008657.


#include<stdio.h>
#include<conio.h>
#include <locale.h>
#define TAM 5
int main()
{
	
	setlocale (LC_CTYPE, "ptb");
	int opcaoMenu1 = 0, opcaoMenu2 = 0, escolaridade = 0, idade = 0, escolhaVaga = 0, contadorRecepcionista = 0, contadorAjudGeral = 0, cotadorGerenteRH = 0, contadorAdS = 0, contadorPorteiro = 0;
	//conforme orienta o exercicio deve-se usar um vetor e colocar as vagas nas posi��es. Tipo a vaga de recpcionista esta na posi��o 0 do vetor,  a Gerente Geral est� na 1.....
	int vagas[TAM] = {5,3,2,1,2};
    float pretencaoSal;
	char sexo;


 // Do-while do menu	
do{
	
		// Apresenta o menu na tela
		
		printf("     ----------\n       MENU 1   \n     ----------");
		printf("\n0 - Iniciar o programa\n1 - Finalizar o programa\n");
	 
  // Recebe a op��o do usu�rio, o do-while certifica que a op��o entrada � v�lida
		do{
			scanf("%d", &opcaoMenu1);
			
				if(opcaoMenu1 != 1 && opcaoMenu1 != 0){
					printf("Op��o inv�lida, entre novamente.\n");
					printf("--------------------------------------\n");
			    	printf("0 - Iniciar o programa\n1 - Finalizar o programa\n");			
				}
								
		}while(opcaoMenu1 != 0 &&  opcaoMenu1 != 1);
		
		if (opcaoMenu1 == 0){
			do{
				printf("\n0 - Entrar com idade");
				printf("\n1 - Entrar com o sexo");
				printf("\n2 - Entrar com a pretens�o salarial");
				printf("\n3 - Entrar com o n�vel de escolaridade;");
				printf("\n4 - Buscar vaga");
				printf("\n5 - Quantidade de vagas dispon�veis");
				printf("\n6 - Voltar ao menu anterior\n");
				scanf("%d", &opcaoMenu2);
//	Op��es Menu	2
//	Escolha op��o 0, 1, 2.
				if(opcaoMenu2 == 0){
					printf("Informe sua idade: ");
					scanf("%d", &idade);
// Idade menor que 16 anos n�o h� vagas
					if(idade < 16){
						printf("\nIdade inferior\n");
					}
				}
				
				if(opcaoMenu2 == 1){
					do{
						printf("Informe seu sexo (M/F): ");
						scanf(" %c", &sexo);
						if(sexo != 'M' && sexo != 'F'){
							printf("OP��O INV�LIDA\n");
						}
					}while(sexo != 'M' && sexo != 'F');
					
				}
					
				if(opcaoMenu2 == 2){
					printf("Informe sua pretensao salarial: ");
					scanf("%f", &pretencaoSal);
				}
				// Escolha op��o 3.
				if(opcaoMenu2 == 3){
					printf("Indique sua escolaridade: ");
					printf ("\n");
					printf("\n0 - fundamental completo\n1 - ensino m�dio completo\n2 - superior completo\n");
					scanf("%d", &escolaridade);
				}
							
				// Escolha da op��o 4
				//Caso usuario n�o informou op��es de idade, sexo, Preten��o salarial.
						if(opcaoMenu2 == 4 && idade == 0 && sexo == 0 && pretencaoSal == 0){
							printf("            --------------------------------------\n");
							printf("Voce deve informar alguns dados. Por isso escolha no menu de 0 a 3\n");
							printf("            --------------------------------------\n");
						}						
				// Vaga Ajudante Geral		
						if(opcaoMenu2 == 4){
							if(escolaridade >= 0 && sexo == 'M' && pretencaoSal <= 900.00 && idade >= 16 && idade <= 20){	
								printf("--Vaga(as) dispon�vel(eis)--");
								printf("\n0 - Ajudante Geral\n1 - Recusar");
								printf("\nInforme uma op��o:");
								scanf("%d", &escolhaVaga);
								contadorAjudGeral =  contadorAjudGeral + 1;
							if(escolhaVaga == 0){
								if(vagas[3] == 0){
									printf("N�o h� mais vagas...\n");
								}else
								vagas[1]= vagas[1]-1;
							}else{
								printf("\nNenhuma vaga selecionada.\n");
								}
							} 
						} 
				// Vaga Porteiro		
						if(opcaoMenu2 == 4){
							if(escolaridade >= 0 && pretencaoSal <= 1200.00 && idade >= 35 && idade <= 50){
								printf("--Vaga(as) dispon�vel(eis)--");
								printf("\n0 - Porteiro\n1 - Recusar");
								printf("\nInforme uma op��o:");
								scanf("%d", &escolhaVaga);
								contadorPorteiro = contadorPorteiro + 1;
							if(escolhaVaga == 0){
								if(vagas[3] == 0){
									printf("N�o h� mais vagas...\n");
								}else
									vagas[4]= vagas[4]-1;
							}else{
								printf("\nNenhuma vaga selecionada.\n");
								}
							}  
						}
				//Vaga Recepcionista		
						if(opcaoMenu2 == 4){
							if(escolaridade >= 1 && sexo == 'F'  && pretencaoSal <= 1500.00 && idade >= 18 ){
								printf("--Vaga(as) dispon�vel(eis)--");
								printf("\n0 - Recepcionista\n1 - Recusar");
								printf("\nInforme uma op��o:");
								scanf("%d", &escolhaVaga);
								contadorRecepcionista = contadorRecepcionista + 1;
							if(escolhaVaga == 0){
								if(vagas[0] == 0){
									printf("N�o h� mais vagas...\n");
								}else
									vagas[0]= vagas[0]-1;
							}else{
								printf("\nNenhuma vaga selecionada.\n");
								}
							}  
						}
				//Vaga Analista de Sistemas		
						if(opcaoMenu2 == 4){
							if(escolaridade == 2 && pretencaoSal >= 3500.00 && idade >= 25 ){
								printf("--Vaga(as) dispon�vel(eis)--");
								printf("\n0 - Analista de Sistemas\n1 - Recusar");
								printf("\nInforme uma op��o:");
								scanf("%d", &escolhaVaga);
								contadorAdS = contadorAdS + 1;
							if(escolhaVaga == 0){
								if(vagas[3] == 0){
									printf("N�o h� mais vagas...\n");
								}else
									vagas[3]= vagas[3]-1;
							}else{
								printf("\nNenhuma vaga selecionada.\n");
								}
							}
							  
						}
				//Vaga Gerente RH		
						if(opcaoMenu2 == 4){
							if(escolaridade == 2 &&  pretencaoSal <= 4500.00 && idade >= 30 ){
								printf("--Vaga(as) dispon�vel(eis)--");
								printf("\n0 - Gerente de RH\n1 - Recusar");
								printf("\nInforme uma op��o:");
								scanf("%d", &escolhaVaga);
								cotadorGerenteRH = cotadorGerenteRH +1;
							if(escolhaVaga == 0){
								if(vagas[3] == 0){
									printf("N�o h� mais vagas...\n");
								}else
									vagas[2]= vagas[2]-1;
							}else{
								printf("\nNenhuma vaga selecionada.\n");
								}
							}  
						}
						/*if(opcaoMenu2 == 4){
							if(contadorPorteiro == 0 && contadorAjudGeral == 0 && cotadorGerenteRH == 0 && contadorAdS == 0 && contadorRecepcionista == 0){
								printf("Desculpe\nN�o h� vagas\nTente Novamente.");
							}
						}*/
							
					
						
			   // Escolha da op��o 5, Mostra vagas disponiveis				
				if(opcaoMenu2 == 5){
			
					printf ("As vagas disponiveis s�o:\n");
					printf ("\n");
					printf ("Vagas de recpcionista: %d\n ", vagas[0]);	
					printf ("Vagas de Ajudante Geral: %d\n ", vagas[1]);
					printf ("Vagas de Gerente de RH: %d\n ", vagas[2]);
					printf ("Vagas de Analista de Sistemas: %d\n ", vagas[3]);
					printf ("Vagas de Porteiro: %d\n ", vagas[4]);
				}			
				
					
	//Caso selecionado o 6, volta ao menu 1.
   }while(opcaoMenu2 != 6);
	
	
	 

	}
//op��o 1 do menu finaliza o programa.
}while(opcaoMenu1 != 1);
printf ("VOC� OPTOU POR TERMINAR O PROGRAMA"); 
return 0;
}
	

