# include <stdio.h>

	int main()
	{ 
	int  i, num_max, in;


	printf ("entre com um numero: ");
	scanf ("%d", &num_max);

	printf ("escolha par com 0 e impar com 1: ");
	scanf ("%d", &in);
	
	if (num_max>0)
	{ 
	switch (in){
	
       case 0:
	       for(i = 0; i < num_max; i=i+2)
           printf("%d\n", i);
	    case 1:
		   for(i = 1; i < num_max; i=i+2)
           printf("%d\n", i);
			
			
		//for(i = 0; i < num_max; i++)
		//if(i % 2 != 0) printf("%d\n", i);  
       	}
    }
	else
	
	    printf ("o numero deve ser maoir q zero");
    
    return 0;
	}
		
		
