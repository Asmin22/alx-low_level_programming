#include "holberton.h"
/**
* _isalpha - checks if supplied argument is a letter
* @c: integer argument passed to the function
* Return: 1 when true, 0 when false
*/
int _isalpha(int c)
{
if (c > 97 && c < 123)
{
return (1);
}
else if (c > 64 && c < 91)
{
return (1);
}
else
{
return (0);
}
}
