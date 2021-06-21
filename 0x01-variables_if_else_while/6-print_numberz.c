#include <stdio.h>
/**
* main - program entry point
* Return: 0 returns nothing
*/
int main(void)
{
int myNum = 0;
while (myNum < 10)
{
putchar(myNum + '0');
myNum++;
}
putchar('\n');
return (0);
}
