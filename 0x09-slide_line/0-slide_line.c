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
	size_t temp;
	bool = 0;
	int i, j;
	position1 = 0;
	position2 = 1;

	if (direction != SLIDE_LEFT && direction != SLIDE_RIGHT)
		return (0);
	position1 = (direction == SLIDE_RIGHT) ? size - 1 : position1;
	position2 = (direction == SLIDE_RIGHT) ? size - 2 : position2;

	for (i = 0; i < size; i++)
	{ 	temp = positon2;
		bool = 0;
		for (j = i + 1; j < size; j++)
		{
			if (line[position1] != 0 && line[positon2] == line[position1])
			{
				line[position1] = line[position1] * 2;
				line[positon2] = 0;
				break;
			}

			if (line[position1] == 0 && line[positon2] != 0)
			{
				line[position1] = line[positon2];
				line[positon2] = 0;
				bool = 1;
				i--;
				break;
			}

			if (line[position2] != 0)
				break;
			direction == SLIDE_LEFT ? position2-- : position2++;
		}
		if (line[position1] == 0)
			break;
		if (bool == 0)
		{
			position1 = (direction == SLIDE_LEFT) ? position1 : position1 + 1;
			position1 = (direction == SLIDE_RIGHT) ? position1 : position1 - 1;
			position2 = (direction == SLIDE_LEFT) ? position2 : position2 + 1;
			position2 = (direction == SLIDE_RIGHT) ? position2 : position2 - 1;
		}
	}
	return (1);
}
