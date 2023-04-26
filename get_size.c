#include "main.h"

/**
* get_size - Get the size of a numeric : Integer || Short || Long
* @format: The string in which to print the arguments
* @i: Nbr of arguments to be printed
*
* Return: The size of a numeric 0 or S_long or S_SHORT
*/
int get_size(const char *format, int *i)
{
	int current_i = *i + 1;
	int size = 0;

	if (format[current_i] == 'l')
		size = S_LONG;
	else if (format[current_i] == 'h')
		size = S_SHORT;

	if (size == 0)
		*i = current_i - 1;
	else
		*i = current_i;

	return (size);
}
