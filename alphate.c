#include "main.h"

/**
 * print_string - loops through string and printsout chars
 * @p: va_list arguments from _printf
 * @m: pointer to struct flags
 *
 * Return: number of chars
 */
int print_string(va_list p, flags_t *m)
{
char *a = va_arg(p, char *);
(void)m;

if(!a)
a = "(null)";
return (_puts(a));
}

/**
 * print_char - print a char
 * @p: va_list argument from _printf
 * @m: pointer to struct flags
 *
 * Return: number of printed chars
 */
int print_char(va_list p, flags_t *m)
{
(void)m;
_putchar(va_arg(p, int));
return (1);
}
