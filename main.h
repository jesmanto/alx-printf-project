#ifndef MAIN_H_
#define MAIN_H_
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
int _printf(const char *format, ...);
void _printchar(char c, int *cp);
void _printstr(const char *s, int *cp);
#endif
