#include "main.h"
/**
 * jack_bauer - function that prints every minute of the day
 * Description: prints every minute of the day
 * Return: SUCCESS
 */
void jack_bauer(void)
{
int i, j;
for (i = 0; i < 24; i++)
{
for (j = 0; j < 60; j++)
{
_putchar(i / 10 + 48);
_putchar(i % 10 + 48);
_putchar(':');
_putchar(j / 10 + 48);
_putchar(j % 10 + 48);
_putchar('\n');
}
}
}
