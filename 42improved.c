/* programma che stampa i primi 42 numeri */
#include <stdio.h>

#define QUANTINUM 42

int main () {
  int i;
  
  i=1;      /* init */
  while (i<=QUANTINUM) {
     if (i==42){
        printf ("questa e' la risposta alla domanda fondamentale \n");
        printf ("la domanda sulla vita, ... l'universo ... ");
        printf ("... e tutto quanto: %d\n", i);
     }
     else printf ("stampiamo i ... %d\n", i);
     i++;
  }
printf ("\nFINE programma\n");
getchar();
getchar();
return 0;
}
