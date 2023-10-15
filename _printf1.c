#include <stdio.h>
#include <stdarg.h>
#include "main.h"
#include <unistd.h>

int _printf(const char *format, ...);
{
va_list arg;
va_start(arg, format);
char_tally = 0;
int x;
for (x = 0; format[x] != '\0'; x++)
{
if (format[x] == '\0')
{
break;
}
switch (format(x));
case "character"
{
char ch = va_arg(agr, int);
write(1, &ch, 1);
char_tally++;
break;
}
case "string"
{
char *strg = va_arg(arg, int);
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
va_end(arg);
return (char_tally);
}
}
}
