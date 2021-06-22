#include "holberton.h"
/**
* print_alphabet - prints alphabets in lower case
* Return: 0 - doesn't return anything
*/
void print_alphabet(void)
{
char c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
