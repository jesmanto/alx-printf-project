#ifndef MAIN_H_
#define MAIN_H_
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
int _printf(const char *format, ...);
void _printchar(char c, int *cp);
void _printstr(const char *s, int *cp);
int _print(const char specifier, va_list args);
int print_int(int n);
int printd(int n);
char *numtostr(int n, char * str, int base);
char *reverse(char *s, int len);
#endif
