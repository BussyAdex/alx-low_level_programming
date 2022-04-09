#include <stdio.h>
/**
 *
 * main - Entrypoint 
 *
 * Description: This to fix task 3-print_alphabets.c
 *    
 * Return: Always (Success)
 *
 */
int main(void)

{
char c;

for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}

for (c = 'A'; c <= 'Z'; c++)
{
putchar(c);
}

putchar('\n');
return (0);
}
