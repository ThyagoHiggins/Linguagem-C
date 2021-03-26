#include <stdio.h>

int main()
{

 float p1,t1,p2,t2,media1,media2, mediafinal;
 
 printf ("Informe a nota T1: ");
 scanf ("%f", &t1);
 
 printf ("Informe a nota P1: ");
 scanf ("%f", &p1);
 
 media1= (p1*0.6)+(t1*0.4);
 printf ("sua media 1 e: %.2f\n\n",media1);
 
 
 printf ("Informe a nota T2: ");
 scanf ("%f", &t2);
 
 printf ("Informe a nota P2: ");
 scanf ("%f", &p2);
 
 media2= (p2*0.7)+(t2*0.3);
 
 
 printf ("sua media 2 e %.2f\n\n\n",media2);
 
 
 mediafinal = (media1+media2)/2;
 
 printf ("Sua media final e: %.2f\n\n",mediafinal);
 
   if(mediafinal >= 6.0){
 	 	 printf ("Aprovado...");
		   }else
	if(mediafinal >=4.0) {
		printf ("Recuperacao...");
		
	}else{
	
	 printf ("Reprovado...");
	 }
 
 return 0;
}
