#include <stdio.h>
#include <stdlib.h>

int main (void)

{

/* numero */

	int a; 

/* leggere nuemero */

	printf ("Digita un numero: ");
	scanf ("%d", &a);

/*Verifica numero positivo negativo*/

	if ( a>= 0 )
/*Il numero positivo o nullo*/
{

	printf("Il numero e positivo\n", a);
}

else

{

/* il numero negativo*/

	printf("Il numero e negativo\n", a);
}

exit (0);

}
