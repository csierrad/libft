#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	char *d = dest;
	const char *s = src;
	int i = 0;

	if(!d || !s)
	{
		return (NULL);
	}

	if(d < s)
	{
		while(i < (int)n)
		{
			*d++ = *s++;
			i++;
		}
	}
	else 
	{
		i = n - 1;
		while(i >= 0)
		{
			*(d + i) = *(s + i);
			i--;
		}
	}
	return (d);
}


int main()
{
	char src[] = "abcde";
	char *dest = (src + 2);

	char src1[] = "abcde";
	char *dest1 = (src1 + 2);

	printf("src: %s\n", src);
	printf("dest: %s\n", dest);

	ft_memmove(dest, src, 3);
	memmove(dest1, src1, 3);

	printf("ft_memmove - dest: %s\n", dest);
	printf("ft_memmove - src: %s\n", src);

	printf("memmove - dest: %s\n", dest1);
	printf("memmove - src: %s\n", src1);

	return 0;
}
