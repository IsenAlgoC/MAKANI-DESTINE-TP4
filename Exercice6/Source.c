#include <stdlib.h>
#include <stdio.h>
#define SIZE 100
#include <time.h>


int main()
{
	int tab[SIZE], valeur;
	int position[SIZE];
	int noccurence = 0;/*nombre d'occurence de la valeur choisit*/
	int* curseur = tab;

	srand((unsigned int )time(NULL));
	for (int i = 0; i < SIZE; ++i)
	{
		tab[i] = rand() % 20 + 1;/*remplissage du tableau avec des valeurs aléatoires */
	}
	/*on affiche le tableau*/
	for (int i = 0; i < SIZE; i++)
	{
		printf("| %d |", tab[i]);
	}
	printf("\n");
	printf("entrer la valeur recherche :");
	scanf_s("%d", &valeur);/*l'utilisateur entre la valeur recherché*/
	for (int i = 0, j = 0; i <= 99; i++)
	{
		if (*(curseur + i) == valeur) {
			position[j] = i;/*enregistré la position de la valeur trouvé dans le tableau position*/
			j++;
			noccurence++;
		}
	}
	if (noccurence == 0) {
		printf("\n la valeur %d n'est pas dans le tableau", valeur);
	}
	/*affichage*/
	printf("La valeur %d a ete  trouvee en ", valeur);
	for (int i = 0; i < noccurence; i++) 
	{
		printf(" %d ", position[i]);
	}

	return 0;
}
