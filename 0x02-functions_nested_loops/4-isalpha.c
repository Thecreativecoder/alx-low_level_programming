#include "main.h"

/**
 * _isalha - checks if a character is alphabetic.
 * @c: the character to be checked 
 *
 *  Return: 1 if character is letter , lowercase or uppercase, 0 otherwise.
 */
int _isalpha(int c)
{ 
	if ((c >= 'a' && c <= 'z') ||
			(c >= 'A' && <= 'Z'))

		return (1);
	else
		return (0);
}
