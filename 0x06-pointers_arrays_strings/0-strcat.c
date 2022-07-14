#include "main.h"
#include <stdio.h>

/**
 * _strcat - a function that concatenates @src to @dest
 * @dest: the destination string to be concatenated upon
 * @src: the source string to append to @dest
 * Return: pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; idex++)
		dest[dest_len++] = src[index];
	
	

	return (dest);
}
