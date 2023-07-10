#include "main.h"
/**
 * helper - helps print multiple types of data
 * @format: list of argument
 * @args: arguments
 *
 * Return: number of characters printed
 */
int helper(const char *format, va_list args)
{
    int char_count = 0;
    while (*format != '\0')
    {
        if (*format == '%')
        {
            if (*(format + 1) == '%')
            {
                _putchar('%');
                format++;
                char_count++;
            }
            else if (*(format + 1) == 'd' || *(format + 1) == 'i')
            {
                char_count += integer(args);
                format++;
            }
            else if (*(format + 1) == 'c')
            {
                char_count += character(args);
                format++;
            }
            else if (*(format + 1) == 's')
            {
                char_count += string(args);
                format++;
            }
            else
            {
                _putchar('%');
                _putchar(*format);
                char_count += 2;
            }
        }
        else
        {
            _putchar(*format);
            char_count++;
        }
        format++;
    }
    return char_count;
}