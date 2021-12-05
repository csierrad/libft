#include <stdio.h>
#include <string.h>

void *ft_memset(void *s, int c, size_t n)
{
	size_t i = 0;
	char *str = s;

	if(!s)
	{
		return (NULL);
	}
	while(i < n)
	{
		*(unsigned char*)(str + i) = (unsigned char)c;
		i++;
	}
	return (str);
}

/* OTRA OPCIÓN:

void *ft_memset(void *s, int c, size_t n)
{
	int i = 0;
	unsigned char *str = s;

	while(i < n)
	{
		*(str + i) = c;
		i++;
	}
	return (str);
} */


/*
int main()
{
	char str[10];
	char str1[10];
	char c = '1';

	char *res1 = memset(str, c, 4);
	char *res2 = ft_memset(str1, c, 4);

	printf("memset: %s\n", res1);
	printf("ft_memset: %s\n", res2);
	return 0;
}
*/
