#include <stdio.h>
#include <locale.h>
int main ()
{
  setlocale (LC_CTYPE, "ptb");

  int x, i=0, soma;
  
  printf ("Insira um n�mero a partir do 1:  ");
  scanf ("%d", &x);
  
  while (soma<=250){
  			i++;
    	soma = soma + x;
  }
  
  printf (" Devem existir %d n�meros em sequencia para a  soma ultrapassar 250", i);
  
  return 0;
  
}
