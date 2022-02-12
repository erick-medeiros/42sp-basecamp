#include <unistd.h>
#include <stdio.h>

void	ex00(void)
{
	return ; //disable
	#include "ex00/ft_strcpy.c"
	printf("ex00----------\n");
	char	src[9];
	char	dest[9];
	int	i;

	src[0] = 't';
	src[1] = 'e';
	src[2] = 's';
	src[3] = 't';
	src[4] = 'a';
	src[5] = 'n';
	src[6] = 'd';
	src[7] = 'o';
	src[8] = '\0';
	ft_strcpy(&dest[0], &src[0]);
	i = 0;
	while (i < 8)
	{
		printf("%c", dest[i]);
		i++;
	}
}

void ex01()
{
	return ; //disable
	#include "ex01/ft_strncpy.c"
	printf("ex01----------\n");
	char	src[8];
	char	dest[10];
	int	i;
	unsigned int n;

	src[0] = 't';
	src[1] = 'e';
	src[2] = 's';
	src[3] = 't';
	src[4] = 'a';
	src[5] = 'n';
	src[6] = 'd';
	src[7] = 'o';

	n = 10;
	ft_strncpy(&dest[0], &src[0], n);
	i = 0;
	while (i < 8)
	{
		printf("%c", dest[i]);
		i++;
	}
}

void	ex02()
{
	return ; //disable
	#include "ex02/ft_str_is_alpha.c"
	printf("ex02---------- Alfabeto\n");
	char *null;
	char *is;
	char *not;

	null = "";
	is = "abc";
	not = "ab1";

	printf("Null > %d\n", ft_str_is_alpha(null));
	printf("Is > %d\n", ft_str_is_alpha(is));
	printf("Not > %d\n", ft_str_is_alpha(not));
}

void	ex03()
{
	return ; //disable
	#include "ex03/ft_str_is_numeric.c"
	printf("ex03---------- Numeros\n");

	char *null;
	char *is;
	char *not;

	null = "";
	is = "abc";
	not = "123";

	printf("Null > %d\n", ft_str_is_numeric(null));
	printf("Alphabet > %d\n", ft_str_is_numeric(is));
	printf("Numeric > %d\n", ft_str_is_numeric(not));
}

void	ex04()
{
	return ; //disable
	#include "ex04/ft_str_is_lowercase.c"
	printf("ex04---------- LowerCase\n");
	char *null;
	char *is;
	char *not;

	null = "";
	is = "abc";
	not = "ABC";

	printf("Null > %d\n", ft_str_is_lowercase(null));
	printf("Is > %d\n", ft_str_is_lowercase(is));
	printf("Not > %d\n", ft_str_is_lowercase(not));
}

void	ex05()
{
	return ; //disable
	#include "ex05/ft_str_is_uppercase.c"
	printf("ex05---------- UpperCase\n");
	char *null;
	char *is;
	char *not;

	null = "";
	is = "ABC";
	not = "abc";

	printf("Null > %d\n", ft_str_is_uppercase(null));
	printf("Is > %d\n", ft_str_is_uppercase(is));
	printf("Not > %d\n", ft_str_is_uppercase(not));
}

void	ex06()
{
	return ; //disable
	#include "ex06/ft_str_is_printable.c"
	printf("ex06---------- Imprimiveis\n");
	//printf("%c", 300);
	//https://web.fe.up.pt/~ee96100/projecto/Tabela%20ascii.htm

	char *null = "";
	char *is = "abc";
	char *not = "\n";

	printf("Null > %d\n", ft_str_is_printable(null));
	printf("Is > %d\n", ft_str_is_printable(is));
	printf("Not > %d\n", ft_str_is_printable(not));

	int i = 0;
	while(i <= 255)
	{
		//printf("i = %d, c = (%c) \n", i, i);
		i++;
	}
}

void	ex07()
{
	return ; //disable
	#include "ex07/ft_strupcase.c"
	printf("ex07----------  UpperCase\n");
	char string[3] = "abc";
	printf("> %s\n", string);
	printf("< %s\n", ft_strupcase(string));
}

void	ex08()
{
	return ; //disable
	#include "ex08/ft_strlowcase.c"
	printf("ex07----------  LowerCase\n");
	char string[3] = "ABC";
	printf("> %s\n", string);
	printf("< %s\n", ft_strlowcase(string));
}

void	ex09()
{
	return ; //disable
	#include "ex09/ft_strcapitalize.c"
	printf("ex09----------  Capitalize\n");
	char string[30] = "hOje ta ChoveNdO mUITO 42teste";
	printf("> %s\n", string);
	printf("< %s\n", ft_strcapitalize(string));
}

void	ex10()
{
	return ; //disable
	#include "ex10/ft_strlcpy.c"
	printf("ex10----------  strlcpy\n");
	// gccm -lbsd
	char	string[] = "Hello World";
	char	dest[11];
	unsigned int size;
	unsigned int len;

	size = 6;
	len = ft_strlcpy(&dest[0], &string[0], size);
	printf("> %s\n", dest);
	printf("Length %d\n", len);
}

void	ex11()
{
	return ; //disable
	#include "ex11/ft_putstr_non_printable.c"
	printf("ex11----------  strlcpy\n");

	char string[] = "Hello\n Word 	a";

	ft_putstr_non_printable(&string[0]);
	printf("\n");
}
/*
void ex12()
{
	//return ; //disable
	#include "ex12/ft_print_memory.c"
	printf("ex12----------  strlcpy\n");

	unsigned int size = 0;
	void *addr;
	int a = 12;
	char string[] = "Bonjour les aminches \n\n\nc est fou	tout\nce";

	addr = &string;

	ft_print_memory(&addr, size); // exit size 0
	size = 2;
	ft_print_memory(&addr, size);
}
*/
int	main(void)
{
	ex00(); //OK
	ex01(); //OK
	ex02(); //OK
	ex03(); //OK
	ex04(); //OK
	ex05(); //OK
	ex06(); //OK
	ex07(); //OK
	ex08(); //OK
	ex09(); //OK
	ex10(); //OK
	ex11(); //OK
	ex12(); //
	return 1;
}
