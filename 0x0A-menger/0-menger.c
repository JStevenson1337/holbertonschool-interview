#include "menger.h"
/**
 * menger - draws a 2D menger sponge
 *
 * @level: size of the surface
 */
void menger(int level)
{
    if (level < 0)
        return;

    int size = (int)pow(3, level);

    /* Draw the sponge */
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            /* Check if cell (i,I j) is not an empty cell */
            if (((i / (int)pow(3, level - 1)) % 3 == 1) &&
                ((j / (int)pow(3, level - 1)) % 3 == 1))
                printf(" ");
            else
                printf("#");
        }
        printf("\n");
    }
}
