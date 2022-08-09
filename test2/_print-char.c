#include "main.h"

/**
 * _printChar:- prints a single character
 *  @args:- arguments list
 *
 * Return:- always 1
 */

int _printChar(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
