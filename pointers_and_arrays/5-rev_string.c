#include "main.h"
/**
* rev_string - function that prints a string
* @s: string
* Return: void
*/

void rev_string(char *s)
{
	int i;
	int last = 0;

	for (i = 0; s[i] != '\0'; i++)
		last++;

	for (i = last - 1; i >= 0; i--)
		_putchar(s[i]);

}
