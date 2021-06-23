#include "holberton.h"
/**
* _islower - checks whether input value is lower of not
* @c: ascii value of char
* Return: 1 when lowercase , 0 when not.
*/
int _islower(int c)
{
if (c > 96 && c < 123)
{
return (1);
}
else
{
return (0);
}
}
