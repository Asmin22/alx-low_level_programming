#include <stdio.h>
/**
* main - program entry point
* Return: 0 returns nothing
*/
int main(void)
{
char myChar = 'a';
int myInt = 0;
while (myInt < 10)
{
putchar(myInt + '0');
myInt++;
}
while (myChar < 'g')
{
putchar(myChar);
myChar++;
}
putchar('\n');
return (0);
}
