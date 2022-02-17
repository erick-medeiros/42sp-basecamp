#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

void	ex00()
{
	//return ; //disable
	#include "ex00/ft_strlen.c"
	printf("c 04 ex 00 strlen\n");
	char str[] = "test";
	printf("> %li\n", strlen(str));
	printf("< %i\n", ft_strlen(str));
}

void	ex01()
{
	//return ; //disable
	#include "ex01/ft_putstr.c"
	printf("c 04 ex 01 ft_putstr\n");
	ft_putstr("Hello World");
	printf("\n");
}

void	ex02()
{
	//return ; //disable
	#include "ex02/ft_putnbr.c"
	printf("c 04 ex 02 ft_putnbr\n");
	ft_putnbr(2147483647);
	printf("\n");
	ft_putnbr(-2147483648);
	printf("\n");
	ft_putnbr(0);
	printf("\n");
	ft_putnbr(42);
	printf("\n");
}

void	ex03()
{
	//return ; //disable
	#include "ex03/ft_atoi.c"
	printf("c 04 ex 03 ft_atoi\n\n");
	char strn1[] = "12546";
	char strn2[] = "GeeksforGeeks";

	printf("atoi\n");
	printf("> str \"%s\" val %i\n", strn1, atoi(strn1));
	printf("< str \"%s\" val %i\n\n", strn1, ft_atoi(strn1));
	printf("> str \"%s\" val %i\n", strn2, atoi(strn2));
	printf("< str \"%s\" val %i\n\n", strn2, ft_atoi(strn2));

	char strn3[] = "--42";
	printf("> str \"%s\" val %i\n", strn3, atoi(strn3));
	printf("< str \"%s\" val %i\n\n", strn3, ft_atoi(strn3));
	char strn5[] = " 42 24";
	printf("> str \"%s\" val %i\n", strn5, atoi(strn5));
	printf("< str \"%s\" val %i\n\n", strn5, ft_atoi(strn5));

	printf("pdf\n");
	char strn4[] = " ---+--+1234ab567";
	printf("> str \"%s\" val -1234\n", strn4);
	printf("< str \"%s\" val %i\n\n", strn4, ft_atoi(strn4));
}

void	ex04()
{
	//return ; //disable
	#include "ex04/ft_putnbr_base.c"
	printf("c 04 ex 04 ft_putnbr_base\n");

	printf("> \n< ");
	ft_putnbr_base(10, "");
	printf("\n");

	printf("> \n< ");
	ft_putnbr_base(10, "a");
	printf("\n");

	write(1, "> valor 100 base 'as'\n< ", 24);
	ft_putnbr_base(100, "as"); // ssaasaa
	write(1, "\n> valor -100 base 'as'\n< ", 26);
	ft_putnbr_base(-100, "as"); // ssaasaa
	write(1, "\n", 1);
}

void	ex05()
{
	//return ; //disable
	#include "ex05/ft_atoi_base.c"
	printf("c 04 ex 05 ft_atoi_base\n");
	printf("%d\n", ft_atoi_base("  -+-042 + 893 --", "0123456789"));
}

int	main(void)
{
	ex00(); //OK
	ex01(); //OK
	ex02(); //OK
	ex03(); //OK
	ex04(); //OK
	ex05(); //
}