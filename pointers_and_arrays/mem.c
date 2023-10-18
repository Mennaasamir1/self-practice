#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str[50];

	strcpy(str, "this is string.h library funtion");
	puts(str);

	memset(str, '$', 8);
	puts(str);

	return (0);

	
}
