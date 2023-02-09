#ifndef __SANDPILES_H__
#define __SANDPILES_H__

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/* Prototype */
int is_stable(int grid1[3][3], int grid2[3][3]);
void redistrobution(int grid1[3][3], int grid2[3][3]);
void sandpiles_sum(int grid1[3][3], int grid2[3][3]);

#endif /*__SANDPILES_H__*/