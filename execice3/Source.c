#include <stdio.h>
#include <string.h>
#include<stdlib.h>

int main() {
	char nom[30];
	char prenom[30];
	char sexe;
	
	do {
		printf(" entrer le sexe de l'utilisateur \n");
		sexe = _getch();
	} while (sexe != 'H'  && sexe != 'F');
	printf("entrer le prenom et le nom de l'utilisateur :");
	scanf_s("%s %s", prenom, (unsigned)_countof(prenom), nom, (unsigned)_countof(nom));
	if (sexe == 'H')
	{ printf("Monsieur %s %s ",nom,prenom); }
	if (sexe == 'F')
	{
		printf("Madame %s %s ", nom, prenom);

	}


	return 0;
}