#include "main.h"

void puts_half(char *str)
{
	int i, count  = 0;

	for (i = 0; str[i] != '\0'; i++)
		count++;

	for (i /= 2; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
	
}
