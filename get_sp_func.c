#include "main.h"

/**
 * get_sp_func - finds the format function
 * @s: the format string
 * Return: the number of bytes printed
*/

int (get_sp_func(char *s))(va_list ap)
{
	sp_t sps[] = {
		{"c", get_char},
		{"s", get_string},
		{"%", get_percent},
		{NULL, NULL}
	};
	int i = 0;

	while (sps[i].sp)
	{
		if (*s == sps[i].sp[0])
		{
			return (sps[i].f);
		}
		i++;
	}
	return (NULL);
}

/**
 * get_print_func - finds the format func
 * @s: the format string
 * @ap: argument pointer
 * Return:  the number of bytes printed
*/
int get_print_func(char *s, va_list ap)
{
	int (*f)(va_list) = get_sp_func(s);

	if (f)
		return (f(ap));
	return (0);
}
