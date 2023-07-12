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

	char_count = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] != '\0'))
	{
	return (-1);
	}
	else
	{
	char_count += helper(format, args);
	}
	va_end(args);

	return (char_count);
}
