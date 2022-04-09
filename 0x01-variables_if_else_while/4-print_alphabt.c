#include <stdio.h>
/**
 * main - Entrypoint
 *
 * Description: This is to fix task 4-print_alphabt.c.
 *
 * Return: Always (Success)
 */
int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
if (c != 'e' && c != 'q')
{
putchar(c);
}
}
putchar('\n');

return (0);
}
