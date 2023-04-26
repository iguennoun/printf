#include "main.h"

/**
* get_flags - Detect active flags
* @format: Formatted string in which to print the arguments
* @i: Current index
* Return:
*	0	 = none	: print normally (right justify, space fill)
*	F_MINUS  = -    : left justify
*	F_ZERO   = 0    : leading zero fill
*	F_PLUS   = +    : print + on positive numbers
*	F_SPACE  =      : invisible + sign
*	F_HASH	 = #	: #
*/
int get_flags(const char *format, int *i)
{
	int j, current_i;
	int flags = 0;
	const char FLAGS_CH[] = {'-', '+', '0', '#', ' ', '\0'};
	const int FLAGS_ARR[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

	for (current_i = *i + 1; format[current_i] != '\0'; current_i++)
	{
		for (j = 0; FLAGS_CH[j] != '\0'; j++)
			if (format[current_i] == FLAGS_CH[j])
			{
				flags |= FLAGS_ARR[j];
				break;
			}

		if (FLAGS_CH[j] == 0)
		break;
	}

	*i = current_i - 1;

	return (flags);
}
