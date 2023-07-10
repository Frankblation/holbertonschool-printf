#include "main.h"
/**
 * _printf - print multiple types of data
 * @format: list of argument
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
int char_count;
va_list args;

<<<<<<< HEAD
    va_start(args, format);
   
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
                char_count += percent(args);
            }
	    else
	    {
		_putchar('%');
		_putchar(*format);
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
=======
va_start(args, format);
char_count = 0;
if (format != NULL)
{
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
_putchar(*format);
char_count += 2;
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
}
else
{
return (0);
>>>>>>> 515fef3cc7181b259904b430fb221e7dec5b982e
}
va_end(args);
return (char_count);
}