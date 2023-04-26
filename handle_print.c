#include "main.h"

/**
* handle_print - Prints an argument based on its type
* @format: The formatted string in which to print the arguments
* @list: List of arguments to be printed
* @idx: Current index
* @buffer: The buffer array of chars to be print
* @flags: Calculates active flags
* @width: Specified width
* @precision: Specified precision
* @size: Specified size
* Return: 1 or 2
*/
int handle_print(const char *format, int *idx, va_list list, char buffer[],
	int flags, int width, int precision, int size)
{
	int i, unknow_len = 0, printed_chars = -1;
	myformat_t f_types[] = {
		{'c', print_char}, {'s', print_string}, {'%', print_percent},
		{'i', print_int}, {'d', print_int}, {'b', print_binary},
		{'u', print_unsigned}, {'o', print_octal}, {'x', print_hexadecimal},
		{'X', print_hexa_upper}, {'p', print_pointer}, {'S', print_non_printable},
		{'r', print_reverse}, {'R', print_rot13string}, {'\0', NULL}
	};
	for (i = 0; f_types[i].myformat != '\0'; i++)
		if (format[*idx] == f_types[i].myformat)
			return (f_types[i].format_func(list,
				buffer, flags, width, precision, size));

	if (f_types[i].myfomat == '\0')
	{
		if (format[*idx] == '\0')
			return (-1);
		unknow_len += write(1, "%%", 1);
		if (format[*idx - 1] == ' ')
			unknow_len += write(1, " ", 1);
		else if (width)
		{
			--(*idx);
			while (format[*idx] != ' ' && format[*idx] != '%')
				--(*idx);
			if (format[*idx] == ' ')
				--(*idx);
			return (1);
		}
		unknow_len += write(1, &format[*idx], 1);
		return (unknow_len);
	}
	return (printed_chars);
}
