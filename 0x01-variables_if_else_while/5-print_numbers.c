#include <stdio.h>
/**
 * main - assign a random number to the varible n each time it is executed
 * and print the last digit of the number stored in variable n
 * Return: Always 0(sucess)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf("\n");

	return (0);
}
