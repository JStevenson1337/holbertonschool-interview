#include "slide_line.h"
/**
 * slide_line - slide a line left or right
 *
 * @line: array of numbers
 * @size: size of the array
 * @direction: direction to slide the line
 *
 * Return: 1 on success, 0 if else
 */
int slide_line(int *line, size_t size, int direction)
{
	int i;
  	int move;

  	/* Slide to left */
  	if (direction == SLIDE_LEFT)
	{
		move = 0;

		for (i = 0; i < (int)size; i++)
		{
	  		if (line[i] != 0)
			{
				if (move != 0)
				{
		  			line[i - move] = line[i];
				}
					if (i + 1 < (int)size)
					{
		  				if (line[i] == line[i + 1])
						{
							line[i - move] = line[i] * 2;
							move++;
		  				}
					}
			} else
			{
				move++;
			}
		}
		for (i = size - 1; i >= (int)size - move; i--)
		{
	  		line[i] = 0;
		}
  	}
  /* Slide to the right */
  	else if (direction == SLIDE_RIGHT)
	{
		move = 0;
		for (i = size - 1; i >= 0; i--)
		{
			if (line[i] != 0)
			{
				if (move != 0)
				{
			  		line[i + move] = line[i];
				}
					if (i - 1 >= 0)
					{
			  			if (line[i] == line[i - 1])
						{
							line[i + move] = line[i] * 2;
							move++;
			  			}
					}
	  		} else
			{
				move++;
	  		}
		}
			for (i = 0; i < move; i++)
			{
				line[i] = 0;
			}
  		}
  /* Error */
  	else
		{
			return 0;
  		}

  	return 1;
}