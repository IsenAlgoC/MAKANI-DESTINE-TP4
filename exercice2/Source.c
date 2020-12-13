#include <stdio.h>
#define SEPARATEUR '/'
#define TAILLETAB1 20

int main() {

	int mytab1[TAILLETAB1];
	for (int i = 0; i < 20; i++)
	{
		mytab1[i]= i + 1;
		printf(" %d /", mytab1[i]);
	}printf("\n");

	int* Myptr1 = mytab1 + 19;
    for (int i = 19; i >= 0; i--) {
		printf("%d /", *(Myptr1--));

	}

	return 0;


}