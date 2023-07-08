int _print_integer(va_list args)
{
    int num = va_arg(args, int);
    char num_str[20];
    int char_count = snprintf(num_str, sizeof(num_str), "%d", num);
    if (char_count < 0)
        return 0;

    for (int i = 0; i < char_count; i++)
        _putchar(num_str[i]);

    return char_count;
}