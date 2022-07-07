#include "main"
/**
 * _isalpha - checks for alphbetic character
 * @c: c is an ascii character
 * Return: 1 (if letter)
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
