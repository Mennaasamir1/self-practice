#include <stdio.h>

int main(void)
{
	int i = 5;
	int *p;
	int **pp;

	p = &i;
	pp = &p;

	printf("size of p: %lu\n", sizeof (p));
	printf("size of pp: %lu\n", sizeof(pp));
	printf("size of *p: %lu\n", sizeof *p);
	printf("size of *pp: %lu\n", sizeof **pp);

	
	return (0);


}
