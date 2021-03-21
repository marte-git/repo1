/* algoritmo di euclide (basato sulle divisioni successive) 
MCD(m,n) = MCD(r,n) supponendo m>=n dove r = resto di m/n
*/
#include <stdio.h>

int main () {
  int n,m,           /* i numeri di cui trovare il MCD */
      r, mcd;

  printf("fornire i due numeri: ");
  scanf("%d %d", &n, &m);

  printf("il massimo comun divisore tra %d e %d", n,m);  /* inizio output */
  
  if (n<m) {
     r=n;
     n=m;
     m=r;
  }
  r = n%m;
    
  while (r!=0) {
      n = m;
      m = r;
      r = n%m;
  }    

  mcd = m;       /* resto non nullo di tutte le divisioni progressive */

  printf(" e' %d\n", mcd);        /* prosecuzione output */

printf("FINE\n");
getchar();
getchar();
return 0;
}
