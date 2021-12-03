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
	int working_grid[3][3];

	for (x = 0; x < 3; x++)
		for (y = 0; y < 3; y++)
			grid1[x][y] += grid2[x][y];
	while (!sandpiles_stable(grid1))
	{
		print_grid(grid1);

		for (x = 0; x < 3; x++)
		for (y = 0; y < 3; y++)
			working_grid[x][y] = 0;

		for (x = 0; x < 3; x++)
			for (y = 0; y < 3; y++)
			{
				if (y != 0 && grid1[x][y - 1] > 3)
					working_grid[x][y]++;
				if (y != 2 && grid1[x][y + 1] > 3)
					working_grid[x][y]++;
				if (x != 0 && grid1[x - 1][y] > 3)
					working_grid[x][y]++;
				if (x != 2 && grid1[x + 1][y] > 3)
					working_grid[x][y]++;
			}

		for (x = 0; x < 3; x++)
			for (y = 0; y < 3; y++)
			{
				if (grid1[x][y] > 3)
					grid1[x][y] -= 4;
				grid1[x][y] += working_grid[x][y];
			}

	}
}

/**
 * @sandpiles_stable - checks if a sandpile is stable
 * 
 * @grid: grid to check
 * 
 * Return: 0 if topple occured, 1 if not 
 */
int sandpiles_stable(int grid[3][3])
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
static void sandpiles_print(int grid[3][3])
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
}
