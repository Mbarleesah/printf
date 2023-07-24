#include "main.h"

/**
 * print_int - prints an integer
 * @p: va_list arguments
 * @m: pointer to struct
 *
 * Return: number of printed char
 */
int print_int(va_list p, flags_t *m)
{
	int r = va_arg(p, int);
	int step = count_digit(r);

	if (m->space == 1 && m->plus == 0 && r >= 0)
		step += _putchar(' ');
	if (m->plus == 1 && r >= 0)
		step += _putchar('+');
	if (r <= 0)
		step++;
	print_number(r);
	return (step);
}

/**
 * print_unsigned - prints an unsigned integer
 * @p: va_list argument
 * @m: pointer to struct
 *
 * Return: number of chars printed
 */
int print_unsigned(va_list y, flags_t *m)
{
	unsigned int ui = va_arg(p, unsigned int);
	char *next = convert(ui, 10, 0);

	(void)m;
	return (_puts(next));
}

/**
 * print_number - helps function loop through an int
 * and prints all its digits
 * @n: int to be printed
 */
void print_number(int n)
{
	unsigned int k;

	if (n < 0)
	{
		_putchar('-');
		k = -n;
	}
	else
		k = n;

	if (k / 10)
		print_number(k / 10);
	_putchar((k % 10) + '0');
}

/**
 * count_digit - counts number of digits in int
 * @i: int to evaluate
 *
 * Return: number of digits
 */
int count_digit(int i)
{
	unsigned int g = 0;
	unsigned int t;

	if (i < 0)
		t = i * -1;
	else
		t = i;

	while (t != 0)
	{
		t /= 10;
		g++;
	}
	return (g);
}
