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
    int char_count;
char_count = 0;

    while (*format != '\0')
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