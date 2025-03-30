#include <stdlib.h>

#include "naloga1.h"

void nastavi(Vozlisce* zacetek) 
{
	Vozlisce* current = zacetek;
	Vozlisce* previous = NULL;

	while (current != NULL)
	{
		current->prejsnje = previous;

		previous = current;
		current = current->naslednje;
	}
}

#ifndef test
int main() { return 0; }
#endif
