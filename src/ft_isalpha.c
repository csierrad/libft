#include <stdio.h>
#include <ctype.h>


int ft_isalpha(int c)
{
	return((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}


/*
int main()
{
	printf("%d\n", ft_isalpha('3'));

	return 0;
}
*/
