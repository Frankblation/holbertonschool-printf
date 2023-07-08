int _print_string(va_list args)
{
    char *str = va_arg(args, char*);
    int char_count = 0;
    if (str == NULL)
    {
        char_count += _printf("(nil)");
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

    return char_count;
}