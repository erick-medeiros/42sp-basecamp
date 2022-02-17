#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	ex00()
{
	//return ; //disable
	#include "ex00/ft_iterative_factorial.c"
	printf("c 05 ex 00\n");
	printf("> 0\n< %i\n", ft_iterative_factorial(-2));
	printf("> 1\n< %i\n", ft_iterative_factorial(0));
	printf("> 1\n< %i\n", ft_iterative_factorial(1));
	printf("> 24\n< %i\n", ft_iterative_factorial(4));
}

void	ex01()
{
	//return ; //disable
	#include "ex01/ft_recursive_factorial.c"
	printf("c 05 ex 01\n");
	printf("> 0\n< %i\n", ft_recursive_factorial(-2));
	printf("> 1\n< %i\n", ft_recursive_factorial(0));
	printf("> 1\n< %i\n", ft_recursive_factorial(1));
	printf("> 24\n< %i\n", ft_recursive_factorial(4));
	printf("> 120\n< %i\n", ft_recursive_factorial(5));
}

void	ex02()
{
	//return ; //disable
	#include "ex02/ft_iterative_power.c"
	printf("c 05 ex 02\n");
	printf("> 0\n< %i\n", ft_iterative_power(4, -1));
	printf("> 1\n< %i\n", ft_iterative_power(4, 0));
	printf("> 4\n< %i\n", ft_iterative_power(4, 1));
	printf("> 16\n< %i\n", ft_iterative_power(4, 2));
	printf("> 65536\n< %i\n", ft_iterative_power(4, 8));
}

void	ex03()
{
	//return ; //disable
	#include "ex03/ft_recursive_power.c"
	printf("c 05 ex 03\n");
	printf("> 0\n< %i\n", ft_recursive_power(4, -1));
	printf("> 1\n< %i\n", ft_recursive_power(4, 0));
	printf("> 16\n< %i\n", ft_recursive_power(4, 2));
	printf("> 65536\n< %i\n", ft_recursive_power(4, 8));
}

void	ex04()
{
	//return ; //disable
	#include "ex04/ft_fibonacci.c"
	printf("c 05 ex 04\n");
	printf("> -1\n< %i\n", ft_fibonacci(-2));
	printf("> 0\n< %i\n", ft_fibonacci(0));
	printf("> 1\n< %i\n", ft_fibonacci(1));
	printf("> 55\n< %i\n", ft_fibonacci(10));
}

void	ex05()
{
	//return ; //disable
	#include "ex05/ft_sqrt.c"
	printf("c 05 ex 05\n");
	printf("> -2 = 0\n< %i\n", ft_sqrt(-2));
	printf("> 0 = 0\n< %i\n", ft_sqrt(0));
	printf("> 16 = 4\n< %i\n", ft_sqrt(16));
	printf("> 36 = 6\n< %i\n", ft_sqrt(36));
	printf("> 2147483647 = 0\n< %i\n", ft_sqrt(2147483647));
}

void	ex06()
{
	//return ; //disable
	#include "ex06/ft_is_prime.c"
	printf("c05 ex06\n\n");
	printf("> 0\n< %i\n\n", ft_is_prime(1));
	printf("> 2 = 1\n< %i\n\n", ft_is_prime(2));
	printf("> prime 7\n< %i\n\n", ft_is_prime(7));
	printf("> not prime 10\n< %i\n\n", ft_is_prime(10));
	printf("> prime 13\n< %i\n\n", ft_is_prime(13));
	printf("> not prime 1500\n< %i\n\n", ft_is_prime(1500));
	printf("> prime 73\n< %i\n\n", ft_is_prime(73));
	printf("> prime 2147483647\n< %i\n\n", ft_is_prime(2147483647));
}

void	ex07()
{
	//return ; //disable
	#include "ex07/ft_find_next_prime.c"
	printf("\nc05 ex07\n\n");

	printf("> 6 prime 7\n< %i\n\n", ft_find_next_prime(6));
	printf("> 90 prime 97\n< %i\n\n", ft_find_next_prime(90));
}

int main()
{
	ex00();
	ex01();
	ex02();
	ex03();
	ex04();
	ex05();
	ex06();
	ex07();
}

