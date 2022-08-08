#include "main.h"

/**
 * _printf - prints anything
 * @format: the format string
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int a = 0;
	int b = 0;

	if (format !='\0')
	{
		_putchar(format[a]);
		a++;
		b++;
	}

	return (b);
}
