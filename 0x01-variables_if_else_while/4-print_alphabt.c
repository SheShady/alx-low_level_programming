#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - a program that prints the alphabet in lowercase, followed by a new \
 * line.
 *
 *Return: SUCCESS
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
while ((c = !'q' && c != 'e'))
{
putchar (c);
++c;
}
}
putchar('\n');
return (0);
}
