#include <stdio.h>
#include <ctype.h>

int ft_tolower(int c)
{
	if(c >= 'A' && c <= 'Z')
	{
		return ('a' + c - 'A');
	}
	return (c);
}

/*
int main()
{
	char c = 'Z';

	printf("%c\n", ft_tolower(c));
	printf("%c\n", tolower(c));
	return 0;
}
*/
