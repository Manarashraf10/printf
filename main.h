#ifndef MAIN_H
#define MAIN_H


#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

#define BUF_FLUSH -1

/**
 * struct flags - flags struct
 * @plus: flag for '+' character
 * @space: flag for ' ' character
 * @hashtag: flag for '#' character
*/

typedef struct flags
{
	unsigned int plus    : 1;
	unsigned int space   : 1;
	unsigned int hashtag : 1;
} flags_t;

/**
 * struct specifier - struct specifier
 * @sp: format specifier
 * @f: pointer to the correct printing function
*/

typedef struct specifier
{
	char sp;
	int (*f)(va_list, flags_t *);
} sp_t;


int _puts(char *str);
int _putchar(char  c);
int get_char(va_list ap);
int get_string(va_list ap);
int get_percent(va_list ap);
int _printf(const char *format, ...);
int (get_sp_func(char *s))(va_list ap);
int get_print_func(char *s, va_list ap);
int print_from_to(char *start, char *stop, char *except);


#endif

