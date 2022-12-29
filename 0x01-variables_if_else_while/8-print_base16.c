#include <stdio.h>
/**
 * main - print all the number of base 16 in lower case
 *
 * Return: 0
 */
int main(void)
{
	char num;
	char letter;

	for (num = '0'; num < 10; num++)
		putchar(num);
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}

