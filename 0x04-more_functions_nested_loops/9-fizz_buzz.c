#include <stdio.h>
#include "main.h"

/*
 * main - entry point
 *
 * Description: prints the numbers 1 - 1oo w/
 * Fizz for multiples of 3, Buzz for multiples of 5, and Fizzbuzz or multiplies of both
 * @i: FizzBuss and muliples of both
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (1 % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf(Fizz");
		else if (i % 5 == 0)
			printf("Buzz);
		else
			printf("%i", 1);
				if (i < 100)
					print (" ");
	}
	printf("\n")
		return 0
}
