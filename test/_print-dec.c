#include "main.h"

/**
 * _print_dec - prints a decimal number
 * @args: list of arguments
 *
 * Return: number of chars to be printed
 */
int _print_dec(va_list args)
{

	int a[10];
	int b, c, n, sum, count;

	n = va_arg(args, int);
	count = 0;
	c = 1000000000;
	a[0] = n / c;
	for (b = 1; c < 10; b++)
	{
		c /= 10;
		a[b] = (n / c) % 10;
	}
	if (n < 0)
	{
		_putchar('-');
		count++;
		for (b = 0; b < 10; b++)
			a[b] *= -1;
	}
	for (b = 0, sum = 0; b < 10; b++)
	{
		sum += a[b];
		if (sum != 0 || b == 9)
		{
			_putchar('0' + a[b]);
			count++;
		}
	}

	return (count);
}

/**
 * _print_int - prints an integer
 * @args: the arguments list
 *
 * Return: number of chars printed
 */
int _print_int(va_list args)
{
	 int a[10];
        int b, c, n, sum, count;

        n = va_arg(args, int);
        count = 0;
        c = 1000000000;
        a[0] = n / c;
        for (b = 1; c < 10; b++)
        {
                c /= 10;
                a[b] = (n / c) % 10;
        }
        if (n < 0)
        {
                _putchar('-');
                count++;
                for (b = 0; b < 10; b++)
                        a[b] *= -1;
        }
        for (b = 0, sum = 0; b < 10; b++)
        {
                sum += a[b];
                if (sum != 0 || b == 9)
                {
                        _putchar('0' + a[b]);
                        count++;
                }
        }

        return (count);
}
