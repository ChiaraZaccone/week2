#include <stdio.h>

int main (){ 
 /* Dichiariazioni variabili */

	int numero;
	int numeroIncrementato;
	int numeroDecrementato;



/* Richiesta a utente con numero */

	printf ("Inserisci numero \n");
	scanf ("%d", &numero);

/*Calcoli di incremento e decremento */
	
	numeroIncrementato= numero +1;
	numeroDecrementato= numero -1;

/* Operazioni di stampe a video */

	printf("Numero incrementato: %d\n", numeroIncrementato);
	printf("Numero decrementatoo: %d\n", numeroDecrementato);

return 0;


}

