#include "menger.h"
/**
 * menger - draws a 2D menger sponge
 *
 * @level: size of the surface
 */
void menger(int level)
{
        const char octothorpe = '#';
	
	if (level < 0)
	{
		printf("%c\n", octothorpe);
	}

	while (level > 0)
	{
		printf("%c", octothorpe);;;
	}

}
