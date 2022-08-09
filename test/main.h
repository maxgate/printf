#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _printChar(va_list);
int _printStr(va_list);
int _print_dec(va_list args);
int _print_int(va_list args);

#endif
