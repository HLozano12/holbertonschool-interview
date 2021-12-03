#ifndef SANDPILES_H
#define SANDPILES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Prototypes */
void sandpiles_sum(int grid1[3][3], int grid2[3][3]);
void sandpiles_print(int grid[3][3]);
int sandpiles_stable(int grid[3][3]);

#endif /* SANDPILES_H */