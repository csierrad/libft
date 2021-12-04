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


/*
int main()
{
	char string[] = "Hola buenas";

	printf("strlen: %ld\n", strlen(string));
	printf("ft_strlen: %ld\n", ft_strlen(string));

	return 0;
}
*/
