#include "main.h"

/**
*_printf - print multiple types of data
* @format: list of arguments
*
* Return: number of characters printed
*/
int _printf(const char *format, ...)
{
    va_list args;
    form_t type[] = {
		{ "i", integer },
        { "d", unsignedint}
		{ "c", character },
		{ "s", string },
        { "%", percent}
	};
    va_start(args, format);

    int char_count = 0;
    while (*format)
    {
        if (*format == '%')
        {
            format++;
            int handled = 0;
            if (*format == 'd' || *format == 'i')
            {
                char_count += integer(args);
                handled = 1;
            }
            else if (*format == 'c')
            {
                char_count += character(args);
                handled = 1;
            }
            else if (*format == 's')
            {
                char_count += string(args);
                handled = 1;
            }
            else if (*format == '%')
            {
                char_count += percent(args);
                handled = 1;
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
