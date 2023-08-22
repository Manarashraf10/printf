#include "main.h"

/**
 * _printf - ptrintf function
 * @format: format
 * Return: printed chars
*/

int _printf(const char *format, ...)
{
	int total = 0;
	va_list ap;
	char *p, *start;

	va_start(ap, format);

	if (!format || format[0] == '%' && !format[1])
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (p = (char *)format; *p; p++)
	{
		if (*p != '%')
		{
			totat += _putchar(*p);
			continue;
		}
		start = p;
		p++;
		if (!get_sp_func(p))
			total += print_from_to(start, p);
		else
			total += get_print_func(p, ap);
	}
	_putchar(BUF_FLUSH);
	va_end(ap);
	return (total);
}
