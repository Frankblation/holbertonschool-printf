#include "main.h"

/**
* integer - prints an integer
* @args: pointer to the arguments in printf
*
* Return: number of characters printed
*/
int integer(va_list args)
{
    int i;
    int num;
    char num_str[90];
    int char_count;
    
    num = va_arg(args, int);
    char_count = snprintf(num_str, sizeof(num_str), "%d", num);
    
    for (i = 0; num_str[i] != '\0'; i++)
        _putchar(num_str[i]);

    return (char_count);
}