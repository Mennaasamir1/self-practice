#include "main.h"

void times_table(void)
{
		int	i,	k,	result;

		for (i = 0; i < 10; i++)
		{
			for (k = 0; k < 10; k++)
			{
				result = i * k;
				
				if (k == 0)
				{
					printf("%d", result);
				}

				else
				{
					printf("%2d", result);
				}

				if (k != 9)
				{
					printf(", ");
				}

			}

			printf("\n");

		}

		printf("\n");
}
