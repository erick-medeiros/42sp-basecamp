#include <stdio.h>
#include <stdlib.h>
#include "ex03/ft_strjoin.c"

int main()
{
	char 	*src[4];
	src[0] = "oi";
	src[1] = "food";
	src[2] = "basecamp";
	src[3] = "marcos";

	char *p;
	p = ft_strjoin(4, src, "^");
	printf("\n%s\n", p);
	free(p);
	p = ft_strjoin(0, src, "^");
	printf("\n%s\n", p);
	free(p);
	return (0);
}