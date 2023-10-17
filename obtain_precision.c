#include "main.h"
#include <stdlib.h> 

int obtain_precision(const char *format, va_list args)
{
int precision = 0;
if (*format == '.')
{
format++;
if (*format == '*')
{
precision = va_arg(args, int);
}
else
{
while (*format >= '0' && *format <= '9')
{
precision = precision * 10 + (*format - '0');
format++;
}
}
}

return precision;
}
