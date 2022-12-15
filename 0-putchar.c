#include <main.h>
/**
 * main - print "_putchar" follow by a new line
 * Description : you are not allowed to use standard libraries
 * Return 0
 */
int main(void)
{
	char alx[] = "_putchar";
	int i = 0;

	while (alx(i)! = '\0)
	{
		_putchar(alx[i]);
		i++;
	}
	_putchar('\n'); 
	return (0);
}
