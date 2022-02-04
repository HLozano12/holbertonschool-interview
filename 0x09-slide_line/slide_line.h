#ifndef SLIDE_LINE_H
#define SLIDE_LINE_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdbool.h>

/* indicates direction of slide */
#define SLIDE_LEFT 1
#define SLIDE_RIGHT 0

/* Prototypes */
int slide_line(int *line, size_t size, int direction);
void SlideToTheLeft(int *line, size_t size);
void SlideToTheRight(int *line, size_t size);

#endif /* SLIDE_LINE_H */
