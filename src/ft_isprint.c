#include <stdio.h>

int ft_isprint(int c)
{
	return (c >= 32 && c <= 127);
}

/*
int main()
{
	printf("%d\n", ft_isprint('3'));
	return 0;
}
*/
