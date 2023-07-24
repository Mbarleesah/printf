#include "main.h"

/**
 * print_bigS - non printable chars
 * @p: va_list argument
 * @m: pointer to struct
 *
 * Return: number of printed chars
 */
int print_bigS(va_list p, flags_t *m)
{
	int h, found = 0;
	char *salt;
	char *g = va_arg(y, char *);

	(void)m;
	if (!g)
		return (_puts("(null)"));

	for (h = 0; g[h]; h++)
	{
		if (g[h] > 0 && (g[h] < 32 || g[h] >= 127))
		{
			_puts("\\x");
			found += 2;
			salt = converted(g[h], 16, 0);
			if (!salt[1])
				found += _putchar('0');
			found += _puts(salt);
		}
		else
			found += _putchar(g[h]);
	}
	return (found);
}

/**
 * print_rev - prints a string in reverse
 * @p: va_list argument
 * @m: pointer to struct
 *
 * Return: number of chars printed
 */
int print_rev(va_list p, flags_t *m)
{
	int t = 0, u;
	char *g = va_arg(p, char *);

	(void)f;
	if (!g)
		g = "(null)";

	while (g[t])
		t++;

	for (u = t - 1; u >= 0; u--)
		_putchar(g[u]);

	return (t);
}

/**
 * print_rot13 - prints rot13 string
 * @p: va_list argument
 * @m: pointer to struct
 *
 * Return: length of printed string
 */
int print_rot13(va_list p, flags_t *m)
{
	int o, p;
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *t = va_arg(p, char *);

	(void)m;
	for (p = 0; t[p]; p++)
	{
		if (t[p] < 'A' || (t[p] > 'Z' && t[p] < 'a') || t[p] > 'z')
			_putchar(t[p]);
		else
		{
			for (o = 0; o <= 52; o++)
			{
				if (t[p] == rot13[o])
					_putchar(ROT13[o]);
			}
		}
	}

	return (p);
}

/**
 * print_percent - prints a percent
 * @p: va_list argument
 * @m: pointer to struct
 *
 * Return: number of printed chars
 */
int print_percent(va_list p, flags_t *m)
{
	(void)p;
	(void)m;
	return (_putchar('%'));
}
