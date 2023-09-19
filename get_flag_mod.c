#include "main.h"

/**
 * get_flags - checks for flags in the format string and retrieves, if any
 * @format: pointer string format
 * @index: position of format strings pointer
 * Return: flag's value or 0
 */

unsigned char get_flags(const char *format, int *index)
{
	int x = 0, y;
	unsigned char c;
	flags_list flags[] = {{42, F_PLUS},
			      {32, F_SPACE},
			      {35, F_HASH},
			      {48, F_ZERO},
			      {45, F_MINUS},
			      {0, 0}};

	while (format[x])
	{
		for (y = 0; flags[y].flag != 0; y++)
		{
			if (flags[y].flag == format[x])
			{
				(*index)++;
				if (c == 0)
					c = flags[y].value;
				else
					c |= flags[y].value;
				break;
			}
		}
		if (flags[y].value == 0)
			break;
		x++;
	}
	return (c);
}
