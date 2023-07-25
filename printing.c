#include "main.h"

/**
 * get_print - selects the right printing function
 * @s: char that holds conversion specifier
 *
 * Return: pointer to matching print function
 */
int (*get_print(char s))(va_list, flags_t *m)
{
as _func_arr[] = {
{'b', print_binary},
{'c', print_char},
{'d', print_int},
{'i', print_int},
{'o', print_octal},
{'a', print_address},
{'r', print_rev},
{'R', print_rot13},
{'s', print_string},
{'S', print_bigS},
{'u', print_unsigned},
{'h', print_hex},
{'H', print_hex_big},
{'%', print_percent}
};
int flags = 14;

register int e;
for (e = 0; e < flags; e++)
if (_func_arr[e].c == s)
return (_func_arr[e].m);
return (NULL);
}
