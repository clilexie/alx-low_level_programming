#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Description: prints the numbers 1 - 100 w/
 * Fizz for multiples of 3, Suzz for multiple of 5,
 * and FizzBuzz fo multiple of both
 *
 * Return: always 0
 */
int main(void)
{
	int i;	
	for (i = 1; i <= 100; i++)
	{
		if (1 % 15 == 0)
			printf("FizBuzz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
