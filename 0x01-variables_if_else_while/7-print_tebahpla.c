#include <stdio.h>
/**
* main - program entry point
* Return: 0 returns nothing
*/
int main(void)
{
char c;
for (c = 'z'; c >= 'a'; c--)
{
putchar(c);
}
putchar('\n');
return (0);
}
