#include <stdio.h>

int ft_isalpha(int c)
{
	return((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int ft_isdigit(int c)
{
	return(c >= '0' && c <= '9');
}

int ft_isalnum(int c)
{
	return(ft_isalpha(c) || ft_isdigit(c));
}



/* int main()
{
	printf("%d\n", ft_isalnum('_'));
	return 0;
} */
