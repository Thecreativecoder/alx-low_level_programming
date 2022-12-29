#include <stdio.h>
/**
 * main - print all single digits numbers in base 10 starting from 0,
 *         and using only putchar without char variables
 *
 * Return: Always 0(sucess)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
