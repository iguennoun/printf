# _printf()

Prints text to terminal based on a given format string to standard output. It's a <stdio.h> printf lookalike function.

Syntax: _printf(\<format string\>, args...)

## Current features
Implemented specifiers:
* Decimal integers (%d)
* Unsigned decimal integers (%u)
* Strings (%s)
* Hex integers (%x %X)
* Octal integers (%o)
* Binary integers (%b)
* Pointer notation for integers (%p)
* Print a string, but print hidden characters as hex codes (%S)
* Reversed strings (%r)
* [Rot13'd](https://en.wikipedia.org/wiki/ROT13) strings (%R)

Implemented flags and options:
* Width
* Precision
* +/space to set sign
* \- to left justify
* \# to display hex/octal binary prefix
* \* and .\* to accept variables for width and precision
* hh, h, and l length flags

## Compilation command
```
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c test/main.c
```

## Testing
The test folder includes a mains.c file which will run a series of pairs of printf statements on many different combinations of specifiers, flag and options using both this version of print and stdlio printf, and output its result to the stdout.

## Authors
Samuel Benson  
Ismail Guennoun
