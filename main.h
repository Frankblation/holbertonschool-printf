#ifndef HEADER_H
#define HEADER_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int helper(const char *format, va_list args);
int integer(va_list args);
int character(va_list args);
int string(va_list args);
int _putchar(char c);
int _printf(const char *format, ...);

#endif