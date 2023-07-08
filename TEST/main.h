#ifndef HEADER_H
#define HEADER_H
#include <stdarg>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int _print_integer(va_list args);
int _print_char(va_list args);
int _print_string(va_list args);
int _putchar(char c);

//* _strlen - calculates the length of a string.//
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

#endif
