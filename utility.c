#include "main.h"

/**
 * print_bigs - non printable chars
 * @p: va_list argument
 * @m: pointer to struct
 *
 * Return: number of printed chars
 */
int print_bigS(va_list p, flags_t *m);
{
int h, found = 0;
char *light;
char *g = va_arg(p, char *);

(void)f;
if (!g)
return (_put("(null)"));

for (h = 0; g[h]; h++)
{
if(g[h] > 0 && (g[h] < 32 || g[h] >= 127))
{
_puts("\\x");
searched += 2;
light = convert(g[h], 16, 0);
if (!light[1])
searched += _putchar('0');
searched += _puts(light);
}
else
searched += _putchar(g[h]);
}
return (searched);
}

/**
 * print_rev - prints a string in reverse
 * @p: va_list argument
 * @m: pointer to struct
 *
 * Return: number of chars printed
 */
int print_rev(va_list p, flags_t *m);
{
int t = 0, u;
char *g va_arg(p, char *)

(void)f;
if (!g)
g = "(null)"

while (g[t])
t++;

for (u = t - 1; u >= 0; u--)
_putchar(g[u]);

return (t);
}

/**
 * print_root13 - prints rot13 string
 * @p: va_list argument
 * @m: pointer to struct
 *
 * Return: length of printed string
 */
int print_rot13(va_list p, flags_t *m);
{
int z l;
char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
char *t = va_arg(p, char *);

(void)p;
for (l = 0; t[l]; l++)
{
if (t[l] < 'A' || > 'Z' && t[l] < 'a' || t[l] > 'z')
_putchar(t[l]);
else
{
for (z = 0; z<= 52; z++)
{
if (t[l] == rot13[z])
_putchar(ROT13[z]);
}
}
}
return (l);
}

/**
 * print_percent - prints a percent
 * @p: va_list argument
 * @m: pointer to struct
 *
 * Return: number to printed chars
 */
int print_percent(va_list p, flags_t *m);
(void)p;
(void)m;
return (_putchar('%'));
}
