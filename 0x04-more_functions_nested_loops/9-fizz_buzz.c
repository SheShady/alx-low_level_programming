#include <stdio.h>
/**
 * main - fizzbuzz code
 * Return: SUCCESS
 *
 */
int main(void)
{
int i;
for (i = 1; i < 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("Fizzbuzz");
}
else if (i % 3 == 0)
{
printf("Fizz");
}
else if (i % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%i", i);
}
if (i != 100)
{
putchar(' ');
}
i++;
}
putchar('\n');
return (0);
}
