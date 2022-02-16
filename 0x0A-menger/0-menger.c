#include "menger.h"

/**
 * menger - create a 2d Menger Sponge
 * @level: the level of the Sponge to draw
 * Return: void
 */

void menger(int level)
{
	int i, j, k;
	int size;
	int columns;
	int rows;

	size = pow(3, level);
	for (rows = 0; rows < size; rows++)
	{
		for (columns = 0; columns < size; columns++)
		{
			k = 35; /* # */
			i = rows;
			j = columns;
			while (i > 0 || j > 0)
			{
				if (i % 3 == 1 && j % 3 == 1)
					k = 32; /* [space] */
				i /= 3;
				j /= 3;
			}
			putchar(k);
		}
		putchar('\n');
	}
}
