#include <stdio.h>

#define TAM 10


int main ()
{
    int nums[TAM], i, maior, menor, imaior,imenor;

    char resp; 
	
	printf ("Iniciar? (s/n) ");
	scanf("%c", &resp);
	
		if (resp == 's'){
		
			for (i = 0; i < TAM; i++){
			
			printf ("Entre com o valor positivo: ");
			scanf ("%d", &nums[i]);
	
		    }
		
		
		printf (" 1o valor = %d\n 5o valor = %d\n 10o valor = %d\n", nums [0], nums [4], nums [9]);
		
				menor = nums [0];
				maior = nums [0];
				imaior = 0;
				imenor = 0;
				
				for (i=0; i< TAM; i++){
				
						
			    if(nums [i] < menor){
				menor= nums[i];
				imenor = i;
				} 
				
		
				 
				if (nums [i]> maior) {
				maior = nums[i]; 
				imaior = i;
				}
				 
				
				}
		    
		
		    printf ("Menor = %d\n Maior = %d\n", menor, maior);
		
			}else{
				printf ("Programa encerrado oras!");
			}	
		
		
			
			
			
return 0;
}
	
	 		
	
	

	

