#include <stdio.h>
/**
* main - program entry point
* Return: 0 returns nothing
*/
int main(void)
{
int myInt = 0;
while (myInt < 10)
{
putchar(myInt + '0');
if (myInt < 9)
{
putchar(44);
putchar(32);
}
myInt++;
}
putchar('\n');
return (0);
}
