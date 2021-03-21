/* calcola e stampa la consistenza del deposito bancario degli 
   indiani che hanno venduto l'isola di Manhattan agli olandesi nel 1628. 
   l'interesse corrisposto e l'anno di vendita sono costanti simboliche; 
   l'anno attuale e' dato in input.  
 */
#include <stdio.h>

#define ANNO_VENDITA 1628
#define INTERESSE 3.0
#define PREZZO_VENDITA 24

int main () {
  int annoAttuale, anno;    /* variabile per leggere l'anno attuale 
                               e contatore di anni                   */

  double deposito=PREZZO_VENDITA;   /* inizializzazione del deposito */

  printf("anno attuale? ");
  scanf("%d", &annoAttuale);

  for ( anno=ANNO_VENDITA; anno<=annoAttuale; anno++) 
     deposito += deposito*INTERESSE/100;

  printf("----- la cosistenza attuale del deposito e'$%12.2f\n", deposito);

printf("FINE\n");
return 0;
}
