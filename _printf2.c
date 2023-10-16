#include "main.h"
/**
* main - Entry point of the program
*
* Description: This function prints an integer and a hexadecimal value using write and putchar.
*
* Return: Always 0 (Success)
*/
int main() 
{
int integerVal = 99;
int hexVal = 0x5A;
char integerStr[12];
char hexStr[12];
write(1, "Integer: ", 9);
sprintf(integerStr, "%d", integerVal);
write(1, integerStr, strlen(integerStr));
write(1, "\n", 1);
write(1, "Hexadecimal: ", 12);
sprintf(hexStr, "%x", hexVal);
write(1, hexStr, strlen(hexStr));
write(1, "\n", 1);
return (0);
}
