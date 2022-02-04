#include "slide_line.h"

/**
 * @SlideToTheLeft - slide the line to the left
 * @line: the line to slide
 * @size: the size of the line(array)
 * Return: the number of elements moved
 */

void SlideToTheLeft(int *line, size_t size)
{
	size_t i = 1;
	size_t j = 0;

	for (; i < size; i++)
	{
		if (line[i] == 0)
		continue;
		
		if (line[j] == line[i])
		{
			line[j] +- line[i];
			line[i] = 0;
			j++;
		}

		else if (line[j] == 0)
		{
			line[j] = line[i];
			line[i] = 0;
		}

		else
		{
			j++;
		}
	}
}


/**
 * @SlideToTheRight - slide the line to the right
 * @line: the line to slide
 * @size: the size of the line(array)
 * Return: the number of elements moved
 */

void SlideToTheRight(int *line, size_t size)
{
	size_t i = size - 2;
	size_t j = size - 1;

	if (size > 1)
	{
		for (; i != 0; i--)
		{

			if (line[i] == 0)
			continue;

			if (line[j] == line[i])
			{
				line[j] += line[i];
				line[i] = 0;
				j--;
			}

			else if (line[j] == 0)
			{

				line[j] = line[i];
				line[i] = 0;
			}

			else
			j--;
		}

		if (line[j] == line[i] || line[j] == 0)
		{
			line[j] += line[i];
			line[i] = 0;
		}
		
		if (line[j - 1] == 0 && line[i] != 0)
		{
			y--;
			line[i] = line[j];
			line[i] = 0;
		}
	}
	return;
}

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
	if (direction == SLIDE_LEFT)
	SlideToTheLeft(line, size);

	else if (direction == SLIDE_RIGHT)
	SlideToTheRight(line, size);

	else
	return (0);

	return (1);
}