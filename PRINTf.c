#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * PRINTf - prints output according to a format
 * @format: format string
 *
 * Return: length of formatted output string
 */
int _printf(const char *format, ...);
{
int (*bfunc)(va_list, flags_t *);
const char *v
va_list commence;
flags_t flags = {0, 0, 0};

register int search = 0;

va_start(commence, format);
if (!format || (format[0] == '%' && !format[1]))
return (-1);
if (format [0] == '%' && format[1] == ' ' && !format[2])
return (-1);
for (v = format; *v; v++)
{
if (*v == '%')
{
v++;
if (*v == '%')
{
search += _putchar('%');
continue;
}
while (get_flag(*v, &flags))
v++;
bfunc = get_print(*v)
search += (bfunc)
? bfunc(commence, &flags)
: _printf("%%%c", *v);
}
else
search += _putchar(*v);
}
_putchar(-1);
va_end(commence);
return (search);
}
