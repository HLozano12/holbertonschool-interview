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
	int review;
	int grid[3][3];

	for (x = 0; x < 3; x++)
	{
		for (y = 0; y < 3; y++)
		{
			grid[x][y] = grid1[x][y] + grid2[x][y];
		}
	}

	while (sandpiles_distribute(grid1))
	{
		for (x = 0; x < 3; x++)
		{
			for (y = 0; y < 3; y++)
			{
				grid[x][y] = grid1[x][y] + grid2[x][y];
			}
		}
	}
}

/**
 * @sandpiles_distribute - distributes the sand
 * 
 * @grid: grid to check
 * 
 * Return: 0 if topple occured, 1 if not 
 */
void sandpiles_distribute(int grid[3][3])
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
