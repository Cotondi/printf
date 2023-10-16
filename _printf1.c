#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
* _putchar - Write a character to stdout.
* @c: The character to be written.
* Return: 1 (success) or -1 (error).
*/
int _putchar(char c)
{
return write(1, &c, 1);
}

/**
* _printf - A streamlined version of the printf function.
* @format: A string that contains format specifiers.
* @...: A varying quantity of arguments.
*
* Return: The quantity of characters outputted
*/
int _printf(const char *format, ...)
{
va_list args;
int tally = 0;
const char *format_pos = format;
va_start(args, format);
while (*format_pos != '\0')
{
if (*format_pos == '%')
{
format_pos++;

switch (*format_pos)
{
case 'c':
{
int c = va_arg(args, int);
tally += _putchar(c);
break;
}
case 's':
{
const char *s = va_arg(args, const char *);
while (*s != '\0')
{
tally += _putchar(*s);
s++;
}
break;
}
case '%':
{
tally += _putchar('%');
break;
}
default:
tally += _putchar('%');
tally += _putchar(*format_pos);
break;
}
}
else
{
tally += _putchar(*format_pos);
}

format_pos++;
}

va_end(args);

return (tally);
}
