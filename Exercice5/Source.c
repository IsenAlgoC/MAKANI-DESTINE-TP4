#include <stdlib.h>
#include <stdio.h>
#define Taille 1024


int main()
{
	char tab[Taille];/*definition du buffer */
	int lettre = 0, nmot = 0/*nombre de mot */, i = 0;
	float moyenne= 0;
	printf("Ecrivez la phrase � analyser  : ");
	gets_s(tab, Taille - 1);
	while (tab[i] != '\0')/*compte le nombre de mot husqu'� la fin de la phrase*/
	{
		if ((tab[i] == ' ') || ((tab[i] == 39) && (tab[i + 1] != ' ')))
		{
			++nmot;
		}
		else if ((tab[i] < 'A') || ((tab[i] > 'Z') && (tab[i] < 'a')) || (tab[i] > 'z'))/*on ignore les caract�re sp�ciaux*/
		{

		}
		/*Compte le nombre de lettres*/
		else
		{
			++lettre;
		}
		++i;
	}
	++nmot;
	moyenne= ((float)lettre) / (nmot);
	printf(" Il y a %d mots de longueur  moyenne de %f caractere.\n", nmot, moyenne);/*affiche le nombre de mot et la moyenne */
	return 0;
}