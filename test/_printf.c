#include "main.h"

/**
 * _printf - prints anything
 * @format: the format string
 * Return; returns the number of characters printed
 */

int _printf(const char *format, ...)
{
	int a = 0;
	int b = 0;
	va_list args;

	va_start(args, format);

	while (format[a])
	{
		while (format[a] == '%')
		{
			switch(format[a + 1])
			{
					case 'c':
						b += _printChar(args);
						a += 2;
						break;
					case 's':
						b += _printStr(args);
						a += 2;
						break;
					case '%':
						_putchar('%');
						b++;
						a += 2;
						break;
					default:
						_putchar(format[a]);
						_putchar(format[a + 1]);
						a +=2;
			}
		}
		
		if (format[a])
		{
			_putchar(format[a]);
			b++;
		}
		a++;
	}
	va_end(args);
	return (b);
}
