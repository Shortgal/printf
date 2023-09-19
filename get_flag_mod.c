#include "main.h"

/**
 * get_flags - checks for flags in the format string and retrieves, if any
 * @format: pointer string format
 * @index: position of format strings pointer
 * Return: flag's value or 0
 */

int get_flags(const char *format, int *index)
{
	int x, y;
	unsigned char c;
	flags_list flags[] = {{42, F_PLUS},
			      {32, F_SPACE},
			      {35, F_SHARP},
			      {48, F_ZERO},
			      {45, F_MINUS},
			      {0, 0}};

	while (*format)
	{
		for (x = 0; flags[x]; x++)
		{
			if (flags[x].flag == *format)
			{
				(*index)++;
				if (c == 0)
					c = flags[x].value;
				else
					c |= flags[x].value;
				break;
			}
		}
		if (flags[x].value == 0)
			break;
	}
	return (c);
}
