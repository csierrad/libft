#include <stdio.h>
#include <string.h>

void ft_bzero(void *s, size_t n)
{
	size_t i = 0;
	char *str = s;

	if(!s)
	{
		return;
	}
	while(i < n)
	{
		*str = 0;
		i++;
		str++;
	}
	return;
}

/*

int main()
{
	char str[10];
	char str1[10];
	int i = 11;

	printf("bzero: %s\n", str);
	printf("ft_bzero: %s\n", str1);

	bzero(str, 4);
	ft_bzero(str1, 4);

	while(i--)
	{
		printf("ft_bzero: %c\n", str1[i]);
	}
	i = 11;
	while(i--)
	{
		printf("bzero: %c\n", str[i]);
	}


	NO FUNCIONA LEERLO DE ESTA FORMA:

	printf("bzero: %s\n", str);
	printf("ft_bzero: %s\n", str1);

	return 0;
	}

*/
