#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *res = (char *)malloc(len + 1);
	size_t i = 0;

	if(!res)
	{
		return (NULL);
	}

	while(i < len && s[start + i])
	{
		res[i] = s[start + i];
		i++;
	}
	
	res[i] = 0;

	return (res); 
}

//REVISAR!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!


/*
int main()
{
	char *str = "hola_buenas_tardes";
	char *res = ft_substr(str, 5, 6);

	printf("ft_substr: %s\n", res);
	return 0;
}
*/
