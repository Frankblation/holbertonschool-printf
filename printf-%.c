#include "main.h"

/**
* percent - print a character
* @arg: pointer to the arguments in printf
*
* Return: pointer to the arguments in printf
*/
int percent(va_list args)
{
    char c = va_arg(args, int);
    _putchar(c);
    return (1);
}