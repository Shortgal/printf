#include "main.h"

/**
 * get_format_func - gets the appropriate function for the operation
 * @num: format
 * Return: a pointer to the function or NULL if not found
 */

void (*get_format_func(int num))(va_list args, char *str)
{
	/* create an array of formats and their corresponding functions */
	format_list formats[] = {{99, print_char},
				 {115, print_string},
				 {100, print_int},
				 {105, print_int},
				 {0, NULL}};
	unsigned int x = 0;

	/* iterate through the array, if any of the formats match */
	/* return the corresponding function */
	while (formats[x].n != 0)
	{
		if (formats[x].n == num)
			return (formats[x].func);
		x++;
	}
	return (NULL);
}