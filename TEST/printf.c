l#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);
int _print_integer(va_list args);
int _print_char(va_list args);
int _print_string(va_list args);

int _printf(const char *format, ...)
{
    va_list args;
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
                char_count += _print_integer(args);
                handled = 1;
            }
            else if (*format == 'c')
            {
                char_count += _print_char(args);
                handled = 1;
            }
            else if (*format == 's')
            {
                char_count += _print_string(args);
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

    return char_count;
}
