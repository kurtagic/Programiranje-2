#include <stdlib.h>
#include <string.h>

#include "naloga2.h"

void razbohoti(char** nizi) 
{
	for (int i = 0; nizi[i] != NULL; i++)
	{
		for (int j = 0; nizi[j] != NULL; j++)
		{
			if (i == j)
			{
				continue;
			}

			// ce sta pointerja enaka, spremen j-ti pointer da kaze na kopijo i-tega stringa
			if (nizi[i] == nizi[j])
			{
				nizi[j] = (char*)malloc((strlen(nizi[i]) + 1) * sizeof(char));
				strcpy(nizi[j], nizi[i]);
			}
		}
	}
}

#ifndef test
int main() { return 0; }
#endif
