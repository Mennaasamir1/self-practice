#include "main.h"

void times_table(void)
{
		int	i,	k,	result;

		for (i = 0; i < 10; i++)
		{
			for (k = 0; k < 10; k++)
			{
				result = i * k;
				printf("%d", result);
				printf(",");
				printf(" ");
			
			}

			printf("\n");
		}

}
