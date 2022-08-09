#include"main.h"

/**
 * _convertNum -  convert number to string
 * @num: number to be convert
 * @base: base of the number
 * @buf: pointer to the char converted to
 * Return: number of character printed
 */
void _convertNum(long long int num, int base, char *buf)
{
	int i = 0, j;
	char a[100];
	if (numb < 0)
	{
		buf[0] = '-';
		num *= -1;
	}
	if (num == 0)
	{
		*buf++ = '0';
		*buf = '\0';
		return;
	}
	while (num)
	{
		int b = num % base;
		if (b >= 10)
			a[i++] = 'a' + (b - 10);
		else
			a[i++] = '0' + b;

		num /= base;
	}
	for (j = i - 1; j >= 0; j--)
		*buf++ = a[j];
	*buf = '\0';
}

/**
 * _printInt: print number with identifier
 * Return:  string to print 
 */

int _printInt(va_list args)
{
	return (_convertNum(va_arg(args, char *)));
}
