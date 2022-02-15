#include <stdio.h>
#include <string.h>

void	ex00(void)
{
	return ;//disable
	#include "ex00/ft_strcmp.c"
	printf("ex00\n");
	char *s1;
	char *s2;

	s1 = "Hello0";
	s2 = "Helloa";
	printf("> value %d s1 %s s2 %s\n", strcmp(s1, s2), s1, s2);
	printf("< value %d s1 %s s2 %s\n\n", ft_strcmp(s1, s2), s1, s2);
	s1 = "Hello";
	s2 = "Hello World";
	printf("> value %d s1 %s s2 %s\n", strcmp(s1, s2), s1, s2);
	printf("< value %d s1 %s s2 %s\n\n", ft_strcmp(s1, s2), s1, s2);
	s1 = "Hello World";
	s2 = "Hello";
	printf("> value %d s1 %s s2 %s\n", strcmp(s1, s2), s1, s2);
	printf("< value %d s1 %s s2 %s\n\n", ft_strcmp(s1, s2), s1, s2);
}

void	ex01()
{
	return ;//disable
	#include "ex01/ft_strncmp.c"
	printf("ex01\n");
	char *s1;
	char *s2;

	s1 = "Hello0";
	s2 = "Helloa";
	printf("> value %d s1 %s s2 %s\n", strncmp(s1, s2, 3), s1, s2);
	printf("< value %d s1 %s s2 %s\n\n", ft_strncmp(s1, s2, 3), s1, s2);
	s1 = "Hello";
	s2 = "Hello World";
	printf("> value %d s1 %s s2 %s\n", strncmp(s1, s2, 6), s1, s2);
	printf("< value %d s1 %s s2 %s\n\n", ft_strncmp(s1, s2, 6), s1, s2);
	s1 = "Hello World";
	s2 = "Hello";
	printf("> value %d s1 %s s2 %s\n", strncmp(s1, s2, 6), s1, s2);
	printf("< value %d s1 %s s2 %s\n\n", ft_strncmp(s1, s2, 6), s1, s2);
}

void	ex02()
{
	return ;//disable
	#include "ex02/ft_strcat.c"
	printf("ex02\n");

	char s1[10] = "12345";
	printf("\n> value %s\n", strcat(s1, "6789"));
	char s2[10] = "12345";
	printf("< value %s\n", ft_strcat(s2, "6789"));
	char s3[10] = "abc";
	printf("\n> value %s\n", strcat(s3, " jbl"));
	char s4[10] = "abc";
	printf("< value %s\n", ft_strcat(s4, " jbl"));
}

void	ex03()
{
	return ;//disable
	#include "ex03/ft_strncat.c"
	printf("ex03\n");

	char s1[10] = "12345";
	printf("\n> value %s\n", strncat(s1, "6789", 2));
	char s2[10] = "12345";
	printf("< value %s\n", ft_strncat(s2, "6789", 2));
	char s3[10] = "abc";
	printf("\n> value %s\n", strncat(s3, " jbl", 2));
	char s4[10] = "abc";
	printf("< value %s\n", ft_strncat(s4, " jbl", 2));
	char s5[10] = "abc";
	printf("\n> value %s\n", strncat(s5, " hello", 7));
	char s6[10] = "abc";
	printf("< value %s\n", ft_strncat(s6, " hello", 7));
	char s7[10] = "abc";
	printf("\n> value %s\n", strncat(s7, " hello", 0));
	char s8[10] = "abc";
	printf("< value %s\n", ft_strncat(s8, " hello", 0));
}

void	ex04()
{
	return ;//disable
	#include "ex04/ft_strstr.c"
	printf("ex04\n");
	char *s1;
	char *s2;

	s1 = "teste123teste4";
	s2 = "123";
	printf("\n> %s\n", strstr(s1, s2));
	printf("< %s\n", ft_strstr(s1, s2));

	s1 = "mariazinha no basecamp";
	s2 = "no";
	printf("\n> %s\n", strstr(s1, s2));
	printf("< %s\n", ft_strstr(s1, s2));
}

unsigned int	strlcat(char *dest, char *src, unsigned int size);

void	ex05()
{
	//return ;//disable
	#include "ex05/ft_strlcat.c"
	printf("ex05\n");
	unsigned int len;

	unsigned int size1 = 11;
	char s1[size1];
	char s2[] = "World Mundo-23"; //12

	s1[0] = 'H';
	s1[1] = 'i';
	s1[2] = '\0';
	len = strlcat(s1, s2, size1);
	printf("> s %s len %i\n", s1, len);

	unsigned int size2 = 11;
	char s3[size2];
	char s4[] = "World Mundo-23";

	s3[0] = 'H';
	s3[1] = 'i';
	s3[2] = '\0';
	len = ft_strlcat(s3, s4, size2);
	printf("< s %s len %i\n", s3, len);
}

int main()
{
	// ex00(); //OK
	// ex01(); //OK
	// ex02(); //OK
	// ex03(); //OK
	// ex04(); //OK
	ex05(); //OK
	return 1;
}