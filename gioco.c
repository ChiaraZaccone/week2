#include <stdio.h>
#include <stdib.h>

int main ()
{
	char scelta, x;
	char utente [21];
	int conta=0;
	
	printif("\nBenvenuti al QuizGame\n");
	printif("\nLoscopo del gioco e\' risponderel maggior numero di domande\n");
	
	do
	{
	printif("\nSelezionare l\opzione 1per iniziare la partita");
	printif("\nSelezionare l\opzione 2 per uscire dal gioco");

	scanf ("%c",&scelta);
	
	if(scelta='A'||scelta='a')
	{
		printf("\nScegliere nome dell utente:\n");
		scanf("%s", &utente);

		printf("\nDove di trova la tour eiffel?\n");
		printf("\nA)Roma\n");
		printf("\nB)Parigi\n");
		printf("\nC)Londra\n");
		scanf ("%d",&x); 
		if(x=2)
		{
			conta++;
		}
		
		





	}
	}while(0);
	return 0;
}




	}
 		
}

