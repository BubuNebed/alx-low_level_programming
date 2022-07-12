#include "main.h"
/**
 * puts_half - prints second half of string
 * @str: string to cut in half & print
 *
 * Return: always void
 */

void puts_half(char *str)
{
	int length, charsToOrint = 0;

	while (*(str + length) != '\0')
		length++;
	if (!(length % 2)) /* if uneven number */
		charsToPrint = (length - 1) / 2;
	else
		charsToPrint = length / 2;
	charsToPrint++;
	while (charsToPrint < length)
		_putchar(*(str + charsToPrint++));
	_putchar('\n');
}
