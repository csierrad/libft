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

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i = 0;

	if(size > 0)
	{
		while (i < (size - 1) && i < ft_strlen(src))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	
	return (ft_strlen(src));
}



//PARA COMPILAR EL PROGRAMA: "gcc ft_strlcpy.c -o main -lbsd"
// que sirve para linkear la librería libbsd

/*
int main()
{
	char src[] = "hola_buenas";
	char dest[12];
	int res = strlcpy(dest, src, 5);

	char src1[] = "hola_buenas";
	char dest1[12];
	int res1 = ft_strlcpy(dest1, src1, 5);

	printf("strlcpy - src: %s\n", src);
	printf("strlcpy - dest: %s\n", dest);
	printf("strlcpy - res: %d\n", res);

	printf("ft_strlcpy - src: %s\n", src1);
	printf("ft_strlcpy - dest: %s\n", dest1);
	printf("ft_strlcpy - res: %d\n", res1);


	return 0;
}
*/
