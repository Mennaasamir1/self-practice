#include "main.h"
/**
* _isalpha - a function that checks for uppercase or lowercase letters
* @c: chacks for a parameter
* Return: 1 or 0
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
	{
		return (1);
	}

	else
		return (0);

}
