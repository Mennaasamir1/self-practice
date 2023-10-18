#include "main.h"

int print_p(va_list vl)
{
	long int m;
	void *i;
	char *p = "(nul)";
	int k, j;

	i = va_arg(vl, void *);
	if (p == NULL)
	{
		for (k = 0; p[k] != '\0'; k++)
		{
			_putchar(p[k]);
			return (k);
		}
	}
	
	m = (unsigned long int)i;
	_putchar(48);
	_putchar('x');
	j = print_h(m);
}
