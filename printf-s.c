#include "main.h"

/**
* string - prints a string
* @args: pointer to the arguments in printf
*
* Return: # of characters printed
*/
int string(va_list args)
{
    char *str = va_arg(args, char*);
    int char_count = 0;
    if (str == NULL)
    {
        char_count += _printf("(null)");
    }
    else
    {
        while (*str)
        {
            _putchar(*str);
            str++;
            char_count++;
        }
    }

    return (char_count);
}