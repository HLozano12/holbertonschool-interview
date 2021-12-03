#include "sandpiles.h"

/**
 * sandpiles_sum - sums two sandpiles
 * @grid1: first sandpile
 * @grid2: second sandpile to be added
 *
 * Return: void
 */

void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
	int x, y;
	
	for (x = 0; x < 3; x++)
	{
		for (y = 0; y < 3; y++)
		{
			grid1[x][y] = grid1[x][y] + grid2[x][y];
		}
	}

	while (1)
	{
		if (grid1[0][0] > 3 || grid1[0][1] > 3 || grid1[0][2] > 3 ||
			grid1[1][0] > 3 || grid1[1][1] > 3 || grid1[1][2] > 3 ||
			grid1[2][0] > 3 || grid1[2][1] > 3 || grid1[2][2] > 3)
		{
			printf("=\n");
			sandpiles_print(grid1);

			for (x = 0; x < 3; x++)
			{
				for (y = 0; y < 3; y++)
				{
					if (grid1[x][y] > 3)
					{
						grid1[x][y] = grid1[x][y] - 4;
						if (x - 1 >= 0)
							grid1[x - 1][y]++;
						if (x + 1 < 3)
							grid1[x + 1][y]++;
						if (y - 1 >= 0)
							grid1[x][y - 1]++;
						if (y + 1 < 3)
							grid1[x][y + 1]++;
					}
				}
			}
		}
		else
			break;
	}
}

/**
 * @sandpiles_stable - checks if a sandpile is stable
 * 
 * @grid: grid to check
 * 
 * Return: 0 if topple occured, 1 if not 
 */
bool sandpiles_stable(int grid[3][3])
{
	int x, y;

	for (x = 0; x < 3; x++)
	{
		for (y = 0; y < 3; y++)
		{ 
			if (grid[x][y] > 3)
				return (0);
		}
	}
	return (1);
}

/**
 * sandpiles_print - prints a 3x3 grid
 * 
 * @grid: sandpile grid to print 
 */
void sandpiles_print(int grid[3][3])
{
	int x, y;

	for (x = 0; x < 3; x++)
	{
		for (y = 0; y < 3; y++)
		{
			if (y)
				printf(" ");
			printf("%d", grid[x][y]);
		}
		printf("\n");
}
