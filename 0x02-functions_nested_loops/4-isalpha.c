#include "main.h"
/**
 * _isalpha - Entry point
 * Description: function that checks for alphabetic character
 * @c: int value it receives
 *
 * Return: 1 if true and 0 if false.
 */
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
