#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#define size 25


int main() {
	char mot[size];/*creation d'un tableau de caractère censé représenté le mot*/
	printf("inserer le mot a tester : \n");
	scanf_s("%s", mot, (unsigned)_countof(mot));
	int L = strlen(mot);/*on prend connaissance de la taille du mot*/
	for (int i = 0, j = L - 1; i <= j; i++, j--)/*test le mot  en comparant dans les deux sens les valeurs du débuts et de fin*/
	{
		if (toupper(mot[i]) != toupper(mot[j]))/*prise en compte des caractères majuscules et minuscules*/ {
			printf("ce n'est pas un palindrome ");
			return 0;/*stop le programme si ce n'est un palindrome*/
		}

	}
	printf("c'est un palindrome");
	return 0;

}