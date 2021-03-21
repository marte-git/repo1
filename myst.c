/* programma che calcola il prodotto di due numeri interi 
dati in input (il prodotto viene calcolato per somme successive 

Inizializziamo p a zero;
poi
 aggiungiamo m a p
per n che va dal suo valore iniziale fino a zero
(cioè n volte)

quando n diventa 0 vuol dire che abbiamo
aggiunto n volte il valore m a p; quindi p contieme n volte m */

#include<stdio.h>

int main() {
  int n, m, p; /* i due numeri e il loro prodotto */
  
  scanf("%d", &n);
  scanf("%d", &m);
  
  for (p=0; n>0; n--) 
    p=p+m;
  
  printf("il prodotto tra i due numeri e' %d\n", p);
printf("FINE\n");
return 0;
}
