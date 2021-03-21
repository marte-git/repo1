/* lettura numero e stampa del successivo: smettere quando si legge 50 
   quando viene dato 50, 51 non viene stampato
  */
#include <stdio.h>

int main () {
  int num;      /* numero letto da input */

              /* l'istruzione di modifica della variabile di test e'
              quella di lettura nel ciclo;
              l'istruzione di inizializzazione di num e' la prima
              lettura
              */

  printf("fornire il primo numero (50 per terminare): ");
  scanf("%d", &num);
  while (num!=50) {
     printf("numero successivo: %d\n", num+1);
     printf("fornire un numero (50 per finire): ");
     scanf("%d", &num);
  }

printf("FINE\n");
return 0;
}
