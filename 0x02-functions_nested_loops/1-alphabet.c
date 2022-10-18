#include "main.h"
/**
 * print_alphabet - Entry point
 * Description - prints alphabets in lower case
 *
 * Return: SUCCESS
 */
void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
