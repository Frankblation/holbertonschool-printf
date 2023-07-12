# _printf
_printf is a recreation of the standard library function printf that writes an output to stdout according to a given format. This function returns the number of characters printed.

Prototype: `int _printf(const char *format, ...);`

## Usage

Example `main.c`:
```
#include "main.h"

int main(void)
{
    _printf("Hello, World!");

    return (0);
}
```

Compilation:
```
$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c -o test
```

Output:
```
$ ./test
Hello, World!
$
```

## Format Specifiers

Use a '%' followed by any of the following format specifers to print a string, character, signed, or unsigned integer:

|Specifiers|Functions|Description| 
|--|--|--|
|s|print_string|print a string| 
|c|print_char|print just a char| 
|i|print_integer|print a signed or unsigned integer|
|d|print_integer|print a signed integer|

## Flowcharts

This program has 5 main functions:

 1. _printf: recieves variables to give to helper to print a formatted string of multiple types
 2. helper: help _printf determing which converter to use
 3. string: print a string
 4. character: print a character
 5. integer: print an integer
![Printf -23](https://github.com/Frankblation/holbertonschool-printf/assets/125315163/350b8242-4059-4df4-8b04-784884501380)
![Printf -24](https://github.com/Frankblation/holbertonschool-printf/assets/125315163/046816e6-f80a-406f-904d-a1833ab68f8f)
![Printf -25](https://github.com/Frankblation/holbertonschool-printf/assets/125315163/88bd63df-f7a0-4c74-a83c-f97979d6e03a)
![Printf -22](https://github.com/Frankblation/holbertonschool-printf/assets/125315163/0ef038de-c371-46ad-8c9e-13a5dca5e178)



## Notes
_printf currently only supports the format specifiers d, i, s, c, and %.

_printf currently does not support field, width, precision, or special flags.

### Authors
*Frank Blation* - [Github](https://github.com/Frankblation) 
||*Kasper Bouldin* - [Github](https://github.com/mokasp) 
