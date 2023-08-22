#include "unistd"
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 * Return: On success 1.
 * On error, -1 is returned, and erno is set appropriately.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - prints a string
 * @str: the string to print
 * Return: void
*/

int _puts(char *str)
{
	char *a = str;

	while (*str)
		_putchar(*str++);
	return (str - a);
}
