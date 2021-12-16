#include <stdio.h>
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i = 0;

	while(i < n)
	{
		if(*(unsigned char*)(s1 + i) != *(unsigned char*)(s2 + i))
		{
			return (*(unsigned char*)(s1 + i) - *(unsigned char*)(s2 + i));
		}
		i++;
		printf("i: %ld\n", i);
	}
	return (0);
}


/*
int main()
{
	char str[] = "hola_buena";
	char str1[] = "hola_buena";

	printf("ft_memcmp: %d\n", ft_memcmp(str, str1, 6));
	printf("memcmp: %d\n", memcmp(str, str1, 6));
	return 0;
}
*/
