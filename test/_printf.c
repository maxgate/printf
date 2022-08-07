#include "main.h"

/**
 * _printf - prints anything
 * @format: the format string
 *
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	int a = 0;
	int b = 0;


	while (format[a])
{
	_putchar(format[a]);
	b++;
	a++;
}
	return (b);
}

