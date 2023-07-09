#include <stdio.h>
#include "main.h"

int main(void)
{
    char c = 'A';
    char *str = "Hello, World!";
    int num = 42;

    // Test %c: character
    _printf("Character: %c\n", c);
    printf("Character: %c\n", c);

    // Test %s: string
    _printf("String: %s\n", str);
    printf("String: %s\n", str);

    // Test %d: integer
    _printf("Integer: %d\n", num);
    printf("Integer: %d\n", num);

    // Test %i: integer
    _printf("Integer (alternative specifier): %i\n", num);
    printf("Integer (alternative specifier): %i\n", num);

    // Test %%: percent symbol
    _printf("Percent symbol: %%\n");
    printf("Percent symbol: %%\n");


    return 0;
}

