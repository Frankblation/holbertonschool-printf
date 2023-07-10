#include "main.h"

/**
* slen - calculates the length of a string
* @s: string
*
* Return: string length
*/
int slen(char *s)
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