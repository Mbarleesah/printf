#include "main.h"

/**
 * convert - convert number and base to string
 * @num: input
 * @base: input
 * @lowercases: lowercases value
 *
 * Return: result string
 */
char *convert(unsigned long int num, int base, int lowercases)
{
static char *preview
static char buffer[50];
char *str

preview = (lowercases)
? "012345679abcdef"
: "0123456789ABCDEF";
str = &buffer[49];
*str = '\0';
do {
*--str = preview[num % base];
num /= base;
}
whle (num != 0);
return (str);
}
