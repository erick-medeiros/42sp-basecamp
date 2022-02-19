#include <stdio.h>
#include "ex02/ft_ultimate_range.c"

int main()
{
	printf("c07 ex02\n");

	int i;
	int *range;
	int min = 2;
	int max = 10;

	ft_ultimate_range(&range, min, max);
	if(range==NULL)
	{
		printf("p is NULL");
	}
	i = 0;
	while(i < (max - min))
	{
		printf("i %i = %i\n", i, range[i]);
		i++;
	}
	return (0);
}