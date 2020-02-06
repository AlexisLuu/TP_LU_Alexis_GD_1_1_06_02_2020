#include <stdio.h>
#include <stdlib.h>

	struct chapitre {
		char description[50];
		char gainGold[50];
		char gainPV[50];
		int tableauID;
	};
	
int main ()
{
	// Déclaration des chapitres
	struct chapitre chapitre1;
	struct chapitre chapitre2;
	struct chapitre chapitre3;
	
	//Info chapitre 1
	strcpy (chapitre1.description, "The Debut");
	strcpy (chapitre1.gainGold,"0");
	strcpy (chapitre1.gainPV,"100");
	chapitre1.tableauID = 101;
	
	printf ("Chapitre 1 description : %s\n", chapitre1.description);
	printf ("Chapitre 1 Gain Or : %s\n", chapitre1.gainGold);
	printf ("Chapitre 1 Gain PV : %s\n", chapitre1.gainPV);
	printf ("Chapitre 1 tabID : %d\n\n\n", chapitre1.tableauID);
	
	//-----------------------------------------------------------------------------
	
	//Info chapitre 2
	strcpy (chapitre2.description, "The Milieu");
	strcpy (chapitre2.gainGold,"50");
	strcpy (chapitre2.gainPV,"50");
	chapitre2.tableauID = 101;
	
	printf ("Chapitre 2 description : %s\n", chapitre2.description);
	printf ("Chapitre 2 Gain Or : %s\n", chapitre2.gainGold);
	printf ("Chapitre 2 Gain PV : %s\n", chapitre2.gainPV);
	printf ("Chapitre 2 tabID : %d\n\n\n", chapitre2.tableauID);
	
	//-----------------------------------------------------------------------------
	
	//Info chapitre 3
	strcpy (chapitre3.description, "The Fin");
	strcpy (chapitre3.gainGold,"100");
	strcpy (chapitre3.gainPV,"0");
	chapitre1.tableauID = 101;
	
	printf ("Chapitre 3 description : %s\n", chapitre3.description);
	printf ("Chapitre 3 Gain Or : %s\n", chapitre3.gainGold);
	printf ("Chapitre 3 Gain PV : %s\n", chapitre3.gainPV);
	printf ("Chapitre 3 tabID : %d\n\n\n", chapitre3.tableauID);
	
	//------------------------------------------------------------------------------
	
	
	// Choix Chapitre
	int choixChapitre = 0;
	int choixOuiNon = 0;
	int end = 0;
	
	while (end != 1)
	{
		printf ("\n Dans quel chapitre souhaitez-vous vous aventurer ? \n 1. The Debut\n 2. The Milieu\n 3. The Fin\n");
		scanf ("%d", &choixChapitre);
		
		
		if (choixChapitre == 1)
		{
			printf ("Bienvenue dans le chapitre 'The Debut' ! \n");
			printf ("Ou alors souhaitez-vous changer de chapitre ? \n 1. Oui\n 2. Non\n");
			scanf ("%d", &choixOuiNon);
			
			while (choixOuiNon !=1 && choixOuiNon !=2)
			{
				printf ("Souhaitez-vous changez de chapitre ? Tapez 1 pour 'Oui' et tapez 2 pour 'Non'\n");
				scanf ("%d", &choixOuiNon);
			}

			if (choixOuiNon == 1)
			{
				choixChapitre = 0;
			}

			if (choixOuiNon == 2)
			{
				printf ("Alors dans ce cas continuez votre aventure !\n");
				end = 1;

			}
		}
		
		
		if (choixChapitre == 2) 
		{
			printf ("Vous continuez une aventure inachevee en entrant dans le chapitre 'The Milieu' ! \n");
			printf ("Ou alors souhaitez-vous changer de chapitre ? \n 1. Oui\n 2. Non\n");
			scanf ("%d", &choixOuiNon);
			while (choixOuiNon !=1 && choixOuiNon !=2)
			{
				printf ("Souhaitez-vous changez de chapitre ? Tapez 1 pour 'Oui' et tapez 2 pour 'Non'\n");
				scanf ("%d", &choixOuiNon);
			}

			if (choixOuiNon == 1)
			{
				choixChapitre = 0;
			}

			if (choixOuiNon == 2)
			{
				printf ("Alors dans ce cas continuez votre aventure !\n");
				end = 1;

			}
		}
		
			
		if (choixChapitre == 3) 
		{
			printf ("Vous etes sur le point de finir l'histoire avec le chapitre 'The Fin' ! \n");
			printf ("Ou alors souhaitez-vous changer de chapitre ? \n 1. Oui\n 2. Non\n");
			scanf ("%d", &choixOuiNon);
			while (choixOuiNon !=1 && choixOuiNon !=2)
			{
				printf ("Souhaitez-vous changez de chapitre ? Tapez 1 pour 'Oui' et tapez 2 pour 'Non'\n");
				scanf ("%d", &choixOuiNon);
			}

			if (choixOuiNon == 1)
			{
				choixChapitre = 0;
			}

			if (choixOuiNon == 2)
			{
				printf ("Alors dans ce cas continuez votre aventure !\n");
				end = 1;

			}
		}	
	}
	return 0;
	
}
