#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i = 0;

	while (i < n && *(unsigned char *)(s + i))
	{
		if (*(unsigned char *)(s + i) == (unsigned char)c)
		{
			return ((void *)(s + i));
		}
		i++;
		printf("i: %ld\n", i);
	}
	return (NULL);
}

/*
int main()
{
	char str[] = "hola_buenas";
	char str1[] = "hola_buenas";
	char c = 't';

	char *res = ft_memchr(str, c, 20);
	char *res1 = memchr(str1, c, 20);

	printf("ft_memchr: %s\n", res);
	printf("memchr: %s\n", res1);

	return 0;
}
*/
