#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes char to stdout
 * @c: char to print
 *
 * Return: on sucess 1, on error -1, errno set appropriately
 */
int _putchar(char c)
{
static char buff[1024];
static int j;

if (c == -1 || j >= 1024)
{
write(1, &buff, j);
j = 0;
}
if (c != -1)
{
buff[j] = c;
j++;
}
return (1);
}

/**
 * _puts - prints a string to stdout
 * @str: pointer to string
 *
 * Return: number of written chars
 */
int _puts(char *str)
{
register int y;

for (y = 0; str[y] != '\0'; y++)
_putchar(str[y]);
return (y);
}
