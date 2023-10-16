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
* _printf - A simplified version of the printf function.
* @format: A string that contains format specifiers.
* @...: Variable number of arguments.
*
* Return: The number of characters printed.
*/
int _printf(const char *format, ...)
{
va_list args;
int tally = 0;
const char *format_pos = format;
va_start(args, format);
while (*format_pos != '\0')
{
<<<<<<< HEAD
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
=======
	va_list arg;
	int x, char_tally = 0;
	char ch, *strg;

	va_start(arg, format);
	for (x = 0; format[x] != '\0'; x++)
	{
		if (format[x] == '\0')
		{
			return (1);
		}
		switch (format(x))
		{
		case "character"
		{
			ch = va_arg(agr, int);
			write(1, &ch, 1);
			char_tally++;
			break;
		}
		case "string"
		{
			*strg = va_arg(arg, int);
			write(1, strg, 1);
			char_tally++;
			break;
		}
		case "%"
		{
			write(1, "%", 1);
			char_tally++;
			break;
		}
		}
	}
	va_end(arg);
	return (char_tally);
>>>>>>> 48152493fe3b15e78c6ff1b66a40b56a9f0c0898
}
