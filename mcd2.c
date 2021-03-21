/* algoritmo di euclide (basato sulle sottrazioni successive) 
MCD(m,n) = MCD((m-n),n) supponendo m>=n
*/
#include <stdio.h>

int main () {
  int n,m,           /* i numeri di cui trovare il MCD */
      mcd;

  printf("fornire i due numeri: ");
  scanf("%d %d", &n, &m);

  printf("il massimo comun divisore tra %d e %d", n,m);  /* inizio output */

  while (n!=m)      /* questo while ha un'unica istruzione (if) da iterare */
     if (m>n)
       m=m-n;
     else n-=m;
           /* usciamo dal ciclo quando n ed m sono diventati uguali */
  mcd=n;       /* o m ... */

  printf(" e' %d\n", mcd);        /* prosecuzione output */

printf("FINE\n");
getchar();
getchar();
return 0;
}
