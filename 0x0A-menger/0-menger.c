#include "menger.h"

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
			for (i = 0; i < level; i++)
			{
				for (j = 0; j < level; j++)
				{
					for (k = 0; k < level; k++)
					{
						if (i == j && j == k)
						{
							printf("#");
						}
						else
						{
							printf(" ");
						}
					}
				}
			}
		}
		printf("\n");
	}
}