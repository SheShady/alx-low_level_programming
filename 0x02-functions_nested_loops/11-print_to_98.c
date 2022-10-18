#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints numbers to 98
 * @n: start integer
 *
 * Description: prints all natural number from n to 98
 *
 * Return: SUCCESS
 */
void print_to_98(int n)
{
if (n <= 98)
{
for (; n <= 98; n++)
{
printf("%d", n);
if (n == 98)
continue;
printf(", ");
}
printf("\n");
}
else
{
for (; n >= 98; n--)
{
printf("%d", n);
if (n == 98)
continue;
printf(", ");
}
printf("\n");
}
}
