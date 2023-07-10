#include "main.h"
/**
 * helper - helps print multiple types of data
 * @format: list of argument
 * @args: arguments
 *
 * Return: number of characters printed
 */
int helper(format, args)
{
int char_count;
char_count = 0;
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
char_count += _putchar('%');
}
else
{
char_count += _putchar(*format);
}
}
else
{
_putchar(*format);
format++;
}
}
return (char_count);
}














