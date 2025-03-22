#include <stdbool.h>
#include <stdio.h>

#include "tranzitivnost.h"

typedef struct Transitivities
{
	bool transitive;
	bool antitransitive;
	bool nontransitive;
} Transitivities;

Transitivities transitivity_in_range(int a, int b);

int tranzitivnost(int a, int b)
{
	// zelo grdo ker copyam ampak bomo prezivel
	Transitivities result = transitivity_in_range(a, b);

	bool tranzitivna = result.transitive;
	bool antitranzitivna = result.antitransitive;
	bool netranzitivna = result.nontransitive;

	if (tranzitivna && antitranzitivna)
	{
		return 1;
	}

	if (tranzitivna)
	{
		return 2;
	}

	if (antitranzitivna)
	{
		return 3;
	}

	if (netranzitivna)
	{
		return 4;
	}

	return -1;
}

Transitivities transitivity_in_range(int a, int b)
{
	Transitivities result = { true, true, false };

	for (int x = a; x <= b; x++)
	{
		for (int y = a; y <= b; y++)
		{
			for (int z = a; z <= b; z++)
			{
				if (f(x, y) != 1 || f(y, z) != 1)
				{
					continue;
				}

				if (f(x, z) != 1)
				{
					result.transitive = false;
				}

				if (f(x, z) != 0)
				{
					result.antitransitive = false;
				}

				if (f(x, z) == 0)
				{
					result.nontransitive = true;
				}

				// early return
				if (!result.transitive && !result.antitransitive && result.nontransitive)
				{
					return result;
				}
			}
		}
	}

	return result;
}
