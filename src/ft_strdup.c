#include <stdio.h>
#include <string.h>
#include <stdlib.h>

size_t ft_strlen(const char *s)
{
	int i = 0;
	while(s[i])
	{
		i++;
	}
	return (i);
}

char *ft_strdup(const char *str)
{
	int i = 0;

	if(!str)
	{
		return (NULL);
	}

	char *res = (char *)malloc(ft_strlen(str) + 1);

	if(!res)
	{
		return (NULL);
	}

	while(str[i])
	{
		res[i] = str[i];
		i++;
	}
	res[i] = 0;

	return  (res);
}


/*
int main()
{
	char *str = "hola_buenas";
	char *res = ft_strdup(str);
	char *res1 = strdup(str);

	printf("str: %s\n", str);
	printf("ft_strdup: %s\n", res);
	printf("strdup: %s\n", res1);

	return 0;
}
*/
