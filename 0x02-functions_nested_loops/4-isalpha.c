#include "main"

/**
* _isalpha - check if a char is lowercase or uppercase
* @c: character to be checked
* Return: 1 if char is lowercase or uppercase letter, otherwise 0.
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && <= 'Z'))
		return (1);
	else
		return (0);
}
