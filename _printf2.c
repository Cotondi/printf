#include <stdio.h>

/**
* print_integer - outputs an integer to the standard output.
* @equalto: The integer to be outputed.
*/
void print_integer(int equalto ) 
{
printf("%d", equalto);
}

/**
* main - The main function.
*
* Return: Always returns 0.
*/
int main() 
{
int numb = 90;
print_integer(numb);
return 0;
}
