#include <stdio.h>
#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i = 0;

	while((s1[i] || s2[i]) && i < n)
	{
		if(s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

/*
int main()
{
	char str[] = "hola_buenas";
	char str1[] = "hola_buenas";

	printf("ft_strncmp: %d\n", ft_strncmp(str, str1, 23));
	printf("strncmp: %d\n", strncmp(str, str1, 23));

	return 0;
}
*/
