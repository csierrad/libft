#include <stdio.h>
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


char *ft_strjoin(char const *s1, char const *s2)
{
	int i = 0;
	int j = 0;
	char *res = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);

	if(!res)
	{
		return (NULL);
	}

	while(s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	while(s2[j])
	{
		res[i + j] = s2[j];
		j++;
	}
	res[i + j] = 0;

	return (res);

}

/*
int main()
{
	char *s1 = "hola_";
	char *s2 = "buenas";

	char *res = ft_strjoin(s1, s2);
	printf("ft_strjoin: %s\n", res);

	return 0;
}
*/
