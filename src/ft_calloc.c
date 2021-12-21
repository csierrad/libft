#include <stdio.h>
#include <stdlib.h>

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

void *ft_calloc(size_t nmemb, size_t size)
{
	void *res;

	res = (void *)malloc(nmemb * size);

	if(!res)
	{
		return (NULL);
	}

	ft_bzero(res, nmemb);

	return (res);
}

/*
int main()
{
	char *str = ft_calloc(5, 1);
	int i = 0;

	while(i < 5)
	{
		printf("%d\n", str[i]);
		i++;
	}

	return 0;
}
*/
