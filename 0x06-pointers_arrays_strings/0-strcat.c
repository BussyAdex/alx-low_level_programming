#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: Input parameter string
 * @src: input parameter string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++i;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
