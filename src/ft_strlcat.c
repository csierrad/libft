#include <stdio.h>
#include <bsd/string.h>

size_t ft_strlen(const char *s)
{
	int i = 0;
	while(s[i])
	{
		i++;
	}
	return (i);
}

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	int j = 0;
	int dst_length =  ft_strlen(dst);
	int src_length =  ft_strlen(src);

	i = ft_strlen(dst);

	if(i < size)
	{
		while(i < (size - 1) && src[j])
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = 0;

		return (dst_length + src_length);
	}
	
	return (size + src_length);
}


/*
int main()
{
	char src[] = "buenas";
	char dest[7] = "hola_";
	int res = strlcat(dest, src, 7);

	char src1[] = "buenas";
	char dest1[7] = "hola_";
	int res1 = ft_strlcat(dest1, src1, 7);

	printf("strlcat - src: %s\n", src);
	printf("strlcat - dest: %s\n", dest);
	printf("strlcat - res: %d\n", res);

	printf("ft_strlcat - src: %s\n", src1);
	printf("ft_strlcat - dest: %s\n", dest1);
	printf("ft_strlcat - res: %d\n", res1);


	return 0;
}
*/
