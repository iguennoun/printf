# _printf()

Prints text to terminal based on a given format string to standard output. Its a <stdio.h> printf lookalike function.

Syntax: _printf(\<format string\>, args...)

## Current features
Implemented specifiers:
* Decimal integers (%d)
* Unsigned decimal integers (%u)
* Strings (%s)

Implemented flags and options:
* Width
* Precision

## Testing
The test folder includes a mains.c file which will run a series of pairs of printf statements on many different combinations of specifiers, flag and options using both this version of print and stdlio printf, and output its result to the stdout.

## Authors
Samuel Benson  
Ismail Guennoun
