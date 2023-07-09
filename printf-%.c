#include "main.h"

/**
 * percent - print a character
 * @args: pointer to the arguments in printf
 *
 * Return: number of characters printed (always 1)
 */
int percent(va_list args)
{
	char c = va_arg(args, int);

    if (c < ' ' || c > '~')
    {
        _putchar('%');
    } else {
	    _putchar(c);
    }
    return 1;
}
