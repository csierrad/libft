#include <stdio.h>
#include <ctype.h>

int ft_toupper(int c)
{
	if(c >= 'a' && c <= 'z')
	{
		return ('A' + c - 'a');
	}
	return (c);
}

/*
int main()
{
	char c = 'a';

	printf("%c\n", ft_toupper(c));
	printf("%c\n", toupper(c));
	return 0;
}
*/
