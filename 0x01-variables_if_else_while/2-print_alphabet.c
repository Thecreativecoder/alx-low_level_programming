#include <stdio.h>
/**
 * main - print alphabet in lower case
 *
 * Return: 0(sucess)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar("\n");

	return (0);
}
