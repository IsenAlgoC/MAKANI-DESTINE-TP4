#include <stdio.h>
#include "tp4.h"

int main()
{
	HEURE HeureDebut, Heurefin, Duree;
	HeureDebut.heure = 12, HeureDebut.minute = 30;
	Duree.minute = 45;
	/* détermination de l'heure de fin*/
		if (HeureDebut.minute + Duree.minute >=60) {
			Heurefin.heure = HeureDebut.heure + 1;
			Heurefin.minute = (HeureDebut.minute + Duree.minute) % 60;
		}
	printf("l'heure de fin est heurefin= %d h %d ", Heurefin.heure, Heurefin.minute);

	return 0;





}
	