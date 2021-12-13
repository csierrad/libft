#include <stdio.h>
#include <string.h>

size_t ft_strlen(const char *s)
{
	int i = 0;
	while(s[i])
	{
		i++;
	}
	return (i);
}

char *ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
		
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char*)(s + i));
		i--;
	}
	return (NULL);
}

/* 
OTRA FORMA: 

char *ft_strrchr(const char *s, int c)
{
	int length = ft_strlen(s);
	int i = 0;

	if(s[length] == (char)c)
	{
		return (char*)(s + length);
	}

	while(i < length)
	{
		if(s[length - i] == (char)c)
		{
			return ((char*)(s + length - i));
		}
		i++;
	}
	return (NULL);

} */


/*
int main()
{
	char c = 'l';
	char str[] = "hola_buenas";
	char str1[] = "hola_buenas";

	char *res = ft_strrchr(str, c);
	char *res1 = strrchr(str1, c);

	printf("ft_strrchr: %s\n", res);
	printf("strrchr: %s\n", res1);
	return 0;
}
*/
