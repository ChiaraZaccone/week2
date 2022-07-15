#include <stdio.h>

void menu ();
void moltiplica ();
void dividi ();
void ins_string();


int main () 

{
	char scelta = '\0';//rimosse graffe
	//messo il do coosi che  a fine ciclo switch si ripresenta il menu
	do{
	
	menu ();

	scanf ("%c", &scelta); //modificato da d a c per riferimento ad intero 

	switch (scelta)
	{
		case 'A':
		moltiplica();
		break;
		case 'B':
                dividi();
                break;
		case 'C':
                ins_string();
                break;
		default: //aggiunto controllo per aggiunta di parametro non giusto
		printf("Fare una scelta\n");
		
		
	} 

		}while ( scelta != 'A'  || scelta || 'B' && scelta || 'C' ); //se non si sceglie una delle tre opzioni il ciclo riparte

return 0;

}


void menu () 
{
	printf ("Benvenuto, sono un assitente digitale, posso aiutarti a sbrigare alcuni compiti\n");
	printf ("Come posso aiutarti?\n");
	printf ("A>>Moltiplicare due numeri\nB>> Dividere due numeri\nC>> Inserire una stringa\n");

}


void moltiplica ()
{
	float  a, b = 0;//cambio della variabile per motipliare anche i numeri decimali
	printf ("Inserisci il numero  da moltiplicare:");
	scanf ("%f", &a);
	scanf ("%f", &b);
	float  prodotto = a * b;

	printf ("Il prodotto tra %f e %f e': %f", a,b,prodotto);
}


void dividi ()
{
        float  a,b = 0;
        printf ("Inserisci il numeratore:");
        scanf ("%f", &a);
	printf ("Inserisci il denumeratore:");
        scanf ("%f", &b);

        float divisione = (float) a / b;//cast perche pu; dare un numero decimale

        printf ("La divisione tra %f e %f e': %f", a,b,divisione);//spostamento apici per vedere giusto risultato
}





void ins_string () 
{
	char stringa[10];
        printf ("Inserisci la stringa:");
        scanf ("%s", &stringa);
}

