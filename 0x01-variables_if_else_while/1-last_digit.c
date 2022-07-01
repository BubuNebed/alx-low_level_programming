#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: checks on the last digit of the assigned var
 * Return: Always 0 (success)
 */

int main(void)
{
	int p;
	int n;
	char str[] = "Last digit of";

	srand(time(0));
	p = rand() - RAND_MAX / 2;
	n = p % 10;

	if (p > 5)
		printf("%s %d is %d and is greater than 5\n", str, p, n);
	else if (n == 0)
		printf("%s %d is %d and is 0\n", str, p, n);
	else if (n < 6)
		printf("%s %d is %d and is less than 6 and not 0\n", str, p, n);


	return (0);
}


			
