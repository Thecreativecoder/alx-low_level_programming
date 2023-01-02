#include "main.h"
/**
 * print_alphabets_x10 - prints 10 times the alphabets in lower case.
 */
void print_alphabets_x10(void)
{
	int count = 0;
	char letter;

	while (count++ <= 9)
	{ 
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
