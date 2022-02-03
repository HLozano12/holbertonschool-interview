#include "slide_line.h"

/**
 * slide_line - slide a line of integers
 * @line: the pointer to array of integers
 * @size: size of the array of the intergers
 * @direction: direction to slide the line, 0 for left, 1 for right
 *
 * Return: 1 if the line was slid, 0 otherwise
 */

int slide_line(int *line, size_t size, int direction)
{
	int i, j, temp;

	if (direction == SLIDE_LEFT)
	{
		for (i = 0; i < size - 1; i++)
		{
			for (j = 0; j < size - 1 - i; j++)
			{
				if (line[j] > line[j + 1])
				{
					temp = line[j];
					line[j] = line[j + 1];
					line[j + 1] = temp;
				}
			}
		}
	}
	else if (direction == SLIDE_RIGHT)
	{
		for (i = 0; i < size - 1; i++)
		{
			for (j = size - 1; j > i; j--)
			{
				if (line[j] < line[j - 1])
				{
					temp = line[j];
					line[j] = line[j - 1];
					line[j - 1] = temp;
				}
			}
		}
	}
	else
		return (0);
	return (1);
}