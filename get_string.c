#include "main.h"

/**
 * get_string - print a string
 * @ap: argument t.
 * Return: the length or the string
*/

int get_string(va_list ap)
{
	char *s;
	int i, len;

	s = va_arg(ap, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
}


/**
 * get_percent - prints string
 * @ap: argument pointer
 * Return: number chars printed
*/

int get_percent(va_list ap)
{
	(void)ap;
	return (_putchar('%'));
}

/**
 * print_from_to - prints a range of char addresses
 * @start: starting address
 * @stop: stopping address
 * @except: except address
 * Return: number bytes printed
*/
int print_from_to(char *start, char *stop, char *except)
{
	int sum = 0;

	while (start <= stop)
	{
		if (start != except)
			sum += _putchat(*start);
		start++;
	}
	return (sum);
}
