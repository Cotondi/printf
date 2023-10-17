#include "main.h"

/**
* _printf - A streamlined version of the printf function.
* @format: A character string that includes format placeholders.
* @...: A flexible number of arguments.
*
* Return: The number of characters outputed
*/
int _printf(const char *format, ...)
{
	va_list args;
	int c, tally = 0;
	const char *s, *format_pos = format;

	va_start(args, format);
	while (*format_pos != '\0')
	{
		if (*format_pos == '%')
		{
			format_pos++;
			switch (*format_pos)
			{
			case 'c':
				c = va_arg(args, int);
				tally += _putchar(c);
				break;
			case 's':
				s = va_arg(args, const char *);
				while (*s)
				{
					tally += _putchar(*s);
					s++;
				}
				break;
			case '%':
				tally += _putchar('%');
				break;
			default:
				tally += _putchar('%');
				tally += _putchar(*format_pos);
				break;
			}
			tally += _putchar(*format_pos);
		}
		format_pos++;
	}
	va_end(args);
	return tally;
}
