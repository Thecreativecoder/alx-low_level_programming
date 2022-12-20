#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -> assign a random no to a variable n eacj time it is executed
 *and print the last digit of the number stored in the variable n
 * Return: 0(sucess)
 */
int main(void)
{
	int n;
	int x;

	srand77(time(0));
	n = rand() - RAND_MAX / 2;

	x = n % 10;
	printf("Last digit of %d is %d ", n, x);
	if (x > 5)
	{
		printf("and is greater than 5");
	}
	if (x == 0)
	{
		printf("and is 0");
	}
	if (x < 6 && x != 0)
	{
		printf("and is than 6 and not 0");
	}

	printf("\n");

	return (0);
}
