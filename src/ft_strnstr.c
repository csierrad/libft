#include <stdio.h>
#include <bsd/string.h>

size_t ft_strlen(const char *s)
{
	int i = 0;
	while(s[i])
	{
		i++;
	}
	return (i);
}

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i = 0;
	size_t j;
	int cont;

	if (!*little)
	{
		return ((char *)big);
	}

	while (big[i] && i < len)
	{
		if (big[i] == little[0])
		{
			j = 1;
			cont = 0;
			while (little[j] && (i + j) < len)
			{
				if (little[j] != big[i + j])
				{
					cont++;
				}
				j++;
			}
		}
		if (cont == 0 && j == ft_strlen(little))
		{
			return ((char *)(big + i));
		}
		i++;
	}
	return (NULL);
}

/*
int main()
{
	char big[] = "________hola_________";
	char little[] = "hola";

	char *res = strnstr(big, little, 21);
	char *res1 = ft_strnstr(big, little, 21);

	printf("ft_strnstr: %s\n", res1);
	printf("strnstr: %s\n", res);

	return 0;
}
*/
