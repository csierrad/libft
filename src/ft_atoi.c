#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *str)
{
	int i = 0;
	int n = 0;

	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		n = 10 * n + (str[i] - '0');
		i++;
	}

	return (n);
}

/*
int main()
{
	char str[] = "34232";

	printf("ft_atoi: %d\n", ft_atoi(str));
	printf("atoi: %d\n", atoi(str));

	return 0;
}
*/
