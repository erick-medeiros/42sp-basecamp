#include <stdio.h>
#include "ex01/ft_range.c"

int main()
{
	printf("c07 ex01\n");

	int i;
	int *p;
	int min = 2;
	int max = 10;

	p = ft_range(min, max);
	if(p==NULL)
	{
		printf("p is NULL");
	}
	i = 0;
	while(i < (max - min))
	{
		printf("i %i = %i\n", i, p[i]);
		i++;
	}
	
	return (0);
}