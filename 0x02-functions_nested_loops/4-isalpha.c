#include "main.h"
/**
 * _isalpha - checks if its a lowercase or uppercase
 * @c: character argument
 * Return: return 1 or 0 if alphabet is upper or lower
 */
int _isalpha(int c);
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
