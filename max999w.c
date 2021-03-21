/* massimo in una sequenza di numeri terminata da 999;
   ciclo e tecnica massimo parziale
 */
#include <stdio.h>

#define VALORE_LIMITE 999
int main ()
{
  int num, maxparz;      /* numero letto da input, contatore e
                   massimo parziale */


  printf("fornire un numero (%d per terminare): ", VALORE_LIMITE);
  scanf("%d", &num);
                  /* se il primo numero e' gia' 999 si termina,
                  senno' si cerca il massimo nella sequenza di numeri,
                  smettendo di leggere e controllare quando appare
                  999 e stampando il massimo */
  if (num==VALORE_LIMITE)
     printf("sequenza terminata subito!\n");
  else {              /* qui si analizza la sequenza, successiva al primo */
      maxparz=num;    /* il primo e' il massimo parziale, per ora */
      do {
        printf("fornire un numero (%d per terminare): ", VALORE_LIMITE);
        scanf("%d", &num);

        if (num==VALORE_LIMITE) 
           printf("sequenza terminata!\n");
        else 
           if (num>maxparz)
              maxparz=num; 
      } while (num!=VALORE_LIMITE);

    printf("----- il massimo numero dato e' %d\n", maxparz);
       }

printf("FINE\n");
getchar();
getchar();
return 0;
}
