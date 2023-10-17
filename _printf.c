#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "main.h"
#include <stdlib.h>

/**
* _printf - Function to format and print content to the standard output.
* @format: The format string that includes format directives.
* @...: Variable arguments to undergo formatting and be output
*
* Return: The count of characters that have been output.
*/
int _printf(const char *format, ...)
{
va_list args;
va_start(args, format);

tally = 0;
char *strg;
int numb;
int field_width;
int precision_value;
int length_value;

while (*format != '\0')
{
if (*format == '%')
{
format++;

field_width = obtain_width(format, args);
precision_value = obtain_precision(format, args);
length_value = obtain_length(format);

switch (*format)
{
case 'c':
putchar((char)va_arg(args, int));
tally++;
break;

case 's':
strg = obtain_string(args);
tally += strlen(strg);
fputs(strg, stdout);
free(strg);
break;

case 'd':
case 'i':
numb = va_arg(args, int);
printf("%d", numb);
tally++;
break;

case '%':
putchar('%');
tally++;
break;

default:
putchar('%');
putchar(*format);
tally += 2;
break;
}
}
else
{
putchar(*format);
tally++;
}

format++;
}

va_end(args);

return tally;
}
