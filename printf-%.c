#include "main.h"

/**
* percent - print a character
* @arg: pointer to the arguments in printf
*
* Return: pointer to the arguments in printf
*/
int percent(va_list args)
{
    char c;
    c = va_arg(args, int);
    _putchar(c);
    char_count++;
    return (1);
}