#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"

void racionaliziraj(char** nizi)
{
	// poglej vse kombinacije parov
	for (int i = 0; nizi[i] != NULL; i++)
	{
		for (int j = 0; nizi[j] != NULL; j++)
		{
			if (i == j)
			{
				continue;
			}

			// ce sta niza enaka, spremen j-ti pointer da kaze na i-ti pointer (vedno j > i)
			if (!strcmp(nizi[i], nizi[j]))
			{
				nizi[j] = nizi[i];
			}
		}
	}
}

#ifndef test
int main() { return 0; }
#endif
