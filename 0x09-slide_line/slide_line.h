#ifndef SLIDE_LINE_H
#define SLIDE_LINE_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/* indicates direction of slide */
#define SLIDE_LEFT 1
#define SLIDE_RIGHT 0

/* Prototypes */
int slide_line(int *line, size_t size, int direction);

#endif /* SLIDE_LINE_H */
