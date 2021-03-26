#include <stdio.h>
#include <locale.h>
int main()
{
  setlocale (LC_CTYPE, "ptb");
  
  int n, i; 
 
 
 
 do{
    
    printf ("Informe um número:  ");
   scanf ("%d", &n);
	
	if(n>500){
     printf ("O programa acabou!!!!!");
	}else {
  
   for (i=0; i<n;i++) printf ("%d\n",n);}
 


 }while (n<500);
 
 
 
   	 
return 0;
}
