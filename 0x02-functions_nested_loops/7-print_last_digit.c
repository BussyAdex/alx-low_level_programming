#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: is the int that will use for the argument o the function
 * Return: interger value
 */
int print_last_digit(int n)
{
int last;

last = n % 10;

if (last < 0)
last = last * -1;

_putchar(last + '0');

return (last);
}
