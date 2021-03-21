/* calcola e stampa la consistenza del deposito bancario degli 
   indiani che hanno venduto l'isola di Manhattan agli olandesi nel 1628. 
   l'interesse corrisposto e l'anno di vendita sono costanti simboliche; 
   l'anno attuale e' dato in input.

   Stampa anche i valori del deposito ogni 30 anni.
 */
#include <stdio.h>

#define ANNO_VENDITA 1628
#define INTERESSE 3.0
#define PREZZO_VENDITA 24
#define INTERVALLO 30

int main () {
  int annoAttuale, anno,    /* variabile per leggere l'anno attuale
			       e contatore di anni                   */
      conta;                /* contatore che viene incrementato ad ogni
			       rivalutazione annuale del deposito;
			       quando arriva a trenta si stampa il deposito
			       e si riazzera
			     */
  double deposito=PREZZO_VENDITA;   /* inizializzazione del deposito */

  printf("anno attuale? ");
  scanf("%d", &annoAttuale);

  conta=0;
  for ( anno=ANNO_VENDITA; anno<=annoAttuale; anno++) {
     deposito += deposito*INTERESSE/100;
     conta++;

     if (conta==INTERVALLO) {
       printf("-- %d: $%12.2f\n", anno, deposito);
       conta=0;
       }
  }

  printf("----- la consistenza attuale del deposito e'$%12.2f\n", deposito);

printf("FINE\n");
return 0;
}
