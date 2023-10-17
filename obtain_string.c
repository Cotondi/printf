#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

char *obtain_string(va_list args)
{
char *strg = va_arg(args, char *);
if (strg == NULL)
{
strg = malloc(6 * sizeof(char));
strcpy(strg, "(null)");
}
return strg;
}
