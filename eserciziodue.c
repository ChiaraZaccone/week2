#include <stdio.h>

int main(){

/* Dichiarazione variabili */

int  a;  
int  b;
float media;


/* Comando utente */


printf("Scrivi il primo  numero:\n"); 

scanf("%d",&a);

printf("Scrivi il secondo numero\n");

scanf("%d",&b);

/* Media aritmetica */


media = (float)(a+b)/2;  


/* Stampa della media */

printf ("la media è: %f\n",media);
}
