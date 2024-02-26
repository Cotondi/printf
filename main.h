#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>
int _printf(const char *format, ...);
int binary(int num);
int octal(int num);
int _putchar(char c);
char *obtain_string(va_list args);
int obtain_width(const char *format, va_list args);
int obtain_precision(const char *format, va_list args);
int obtain_length(const char *format);

#endif 
