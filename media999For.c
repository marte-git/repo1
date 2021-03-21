/* media di una sequenza di numeri terminata da 999;
 
   tecnica di accumulazione

   ci vuole anche un contatore, per tener traccia di quanti numeri si sono letti

 */
#include <stdio.h>

#define VALORE_LIMITE 999
int main () {
  int num, quanti=0;                   /* numero letto da input, contatore */
  double media,
     somma=0.0;                        /* somme parziali dei numeri letti  */


  printf("fornire un numero (%d per terminare): ", VALORE_LIMITE);
  scanf("%d", &num);

        /* il ciclo prima accumula quel che e' stato letto in
               precedenza e poi legge un altro numero;
               in questo modo, quando viene letto 999, questo
               valore fa uscire dal ciclo e non viene aggiunto
               in somma
             */

  for ( ; num != VALORE_LIMITE; quanti++) {
       somma += num;
       printf("fornire un numero (%d per terminare): ", VALORE_LIMITE);
       scanf("%d", &num);
    }


            /* dopo ogni accumulazione, quanti e' stato incrementato
            di 1; cosi' ora contiene la quantita' di numeri immessi
            in input
            */
  media = somma/quanti;
  printf("----- la media dei %d numeri dati e' %g\n", quanti, media);


printf("FINE\n");
return 0;
}
