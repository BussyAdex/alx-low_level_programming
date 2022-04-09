#include <stdio.h>
/**
*main - Entrypoint 
*
*Description: This is to fix task 2-print_alphabet.c
*
*Return: Always (Success)
*
*/
int main(void)
{

char c;

for (c = 'a'; c <= 'z'; c++)
putchar(c);

putchar('\n');
return (0);
}
