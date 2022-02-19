#include <stdio.h>
#include "ex00/ft_strdup.c"

int main()
{
	char *src = "oi";
	char *p = ft_strdup(src);
	printf("c07 ex00\n");
	printf("\n%s\n", p);
	return (0);
}