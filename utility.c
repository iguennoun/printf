#include "main.h"

/**
* is_printable - Test if a char is printable
* @c: Char to be tested
*
* Return: 1 if yes or 0 otherwise
*/
int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);
	
	return (0);
}

/**
* append_hexa_code - Append ascii char code in hexadecimal to buffer
* @buffer: String of chars to be printed
* @i: Index at which to start appending.
* @ascii_code: Ascii Code
* Return: Always 3
*/
int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";
	/* The hexadecimal format code is always 2 digits long */
	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}

/**
* is_digit - Verifies if a char is a digit
* @c: Char to be evaluated
*
* Return: 1 test ok or 0 otherwise
*/
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	
	return (0);
}

/**
* convert_size_number - Casts a number to the specified size
* @num: The number to be casted
* @size: Integer indicating the type to be casted to
*
* Return: Casted value of "num"
*/
long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}

/**
* convert_size_unsgnd - Casts a number to the specified size
* @num: The number to be casted
* @size: Integer indicating the type to be casted to
*
* Return: Casted value of "num"
*/
long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}
