#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale (LC_CTYPE, "ptb");
  
int n,r, fn, fr, cn,cr, sub, csub, fasub, com;

printf ("Informe um n� ");
scanf ("%d", &n);

printf ("Informe outro n�  ");
scanf ("%d", &r);


cr = r;
fr=1;

do {
n = n;
fn = 1;

	fn = fn*n;
	cn = cn-1;
}while (cn <1);

	scanf ("O fatorial de %d � %d",n,fn);

		
	
	
	
		
}






