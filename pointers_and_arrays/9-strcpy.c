#include "main.h"
#include <string.h>
/**
* _strcpy - function that copies a string
* @dest: pointer to string
* @src: pointer
* Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int	i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';

		return (dest);

}
