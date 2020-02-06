#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int choixDeplacements = 0;
	printf ("Deux chemins s'offrent a vous : \n 1. Le Volcan de Lave \n 2. La Mer d'Eau \n \n Tapez le numero de la destination voulue : \n");
	scanf ("%d", &choixDeplacements);
	
	while (choixDeplacements !=1 && choixDeplacements !=2)
	{
		printf ("Tapez le numero de la destination voulue : \n");
		scanf ("%d", &choixDeplacements);
	}
	
	if (choixDeplacements == 1)
	{
		printf ("Vous voila pret a affronter le Monde de Lave ! \n");
	}
	
	if (choixDeplacements == 2) 
	{
		printf ("Vous voila pret a plonger dans le Monde Aquatique ! \n");
	}
	
	return 0;
	
}