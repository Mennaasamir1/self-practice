#include "main.h"

int _atoi(char *s)
{
	unsigned int result = 0;
	int	sign = 1; /* it should be positive to convert negative to positive and vice versa */


	do
	{
		if (*s == '-')
				sign= -1;

		else if (*s >= '0' && *s <= '9')
				result = (result * 10) + (*s - '0');
		else if (result > '0')
				break;

	} while (*s++);

	return (result * sign);
}



