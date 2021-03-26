#include <stdio.h>

int main()
{
	float peso, idade;
	
	printf("Informe o peso do atleta:");
	scanf("%f", &peso);

	printf("Informe o idade do atleta:");
	scanf("%f", &idade);
	
	if ((peso<=45)&&(idade==13 || idade==14))
	{
	printf("o atleta e da categoria  infantil leve");
	
	}else{
	
	if ((peso>45 && peso<60) && (idade==13 || idade==14))
	{
	printf("o atleta e da categoria  infantil pesado");
	}else{
	if ((peso<=60) && (idade>15 || idade<17))
	}
			
				printf("o atleta e da categoria  juvenil leve");
													
					}else{
					if ((peso>60 && peso<85) && (idade>15 || idade<17)){
						printf("o atleta e da categoria  juvenil leve");}
							}else{ 
							if ((peso<85) && (idade>=18)){
							printf("o atleta e da categoria  adulto leve");
							
								}else{ 
									if ((peso>85) && (idade>=18)){
								printf("o atleta e da categoria  adulto pesado");
								}
									
			              			
    
	return 0;
}


