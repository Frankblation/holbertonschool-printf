#include "main.h"
/**
 * _printf - print multiple types of data
 * @format: list of argument
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
    va_list args;
    int char_count;

    va_start(args, format);
   
    char_count = 0;
    if (*format == NULL)
    {
        return (0);
    }
    while (*format)
    {
        if (*format == '%')
        {
            format++;
            if (*format == 'd' || *format == 'i')
            {
                char_count += integer(args);
            }
            else if (*format == 'c')
            {
                char_count += character(args);
            }
            else if (*format == 's')
            {
               char_count += string(args);
            }
            else if (*format == '%')
            {
                _putchar('%');
                char_count += 1;
            }
	    else
	    {
		_putchar('%');
		_putchar(*format);
		char_count += 1;
	    }
	}
	else
	{
		_putchar(*format);
		char_count++;
	}
    format++;
    }
    va_end(args);

    return (char_count);
}
