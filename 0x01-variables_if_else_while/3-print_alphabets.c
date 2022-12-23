#include <stdio.h>
/**
 * main - print alphabet in lower and upper case
 *
 * Return: Always 0(success)
 */
int main(void)
{
	char sl;
	char cl;

	for (sl = 'a'; sl <= 'z'; sl++)

	putchar sl;

	for (cl = 'A'; cl <= 'z'; cl++)

	putchar cl;

	putchar ('\n');
	return (0);
}
