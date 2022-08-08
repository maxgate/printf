#include"main.h"

/**
 * _puts: print string
 * @str: pointer to the string to be printed
 * Return: number of character printed
 */
int _puts(char *str)
{
	int index = 0;

	while (str[index])
	{
		_putchar(str[index]);
		index++;
	}
	return (index);
}

/**
 * _printStr: print string with identifier
 * Return:  string to print 
 */

int _printStr(va_list args)
{
	return (_puts(va_arg(args, char *)));
}
