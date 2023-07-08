#include "main.h"

/**
* character - print a character
* @arg: pointer to the arguments in printf
*
* Return: pointer to the arguments in printf
*/
int character(va_list args)
{
    char c;
    c = va_arg(args, int);
    _putchar(c);
    return (1);
}