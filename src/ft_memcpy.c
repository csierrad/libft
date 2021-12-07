#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i = 0;
	char *d = dest;
	const char *s = src;
	

	if (!src)
	{
		return (dest);
	}
	
	while(i < n)
	{
		*(d + i) = *(s + i);
		i++;
	}
	return (dest);
}

//REVISARLO PORQUE PARA EL CASO DE SRC VACÍO CREO QUE NO HACE 
//LO QUE TIENE QUE HACER !!!!!!!!!!!!!!!!!!!!!!!!

/*
int main()
{
	char src[] = "" ;
	char dest[] = "hola_buenas";
	char src1[] = "";
	char dest1[] = "hola_buenas";

	printf("ft_memcpy: %s\n", dest);
	printf("memcpy: %s\n", dest1);


	char *res = ft_memcpy(dest, src, 6);
	char *res1 = memcpy(dest1, src1, 6);

	printf("ft_memcpy: %s\n", res);
	printf("memcpy: %s\n", res1);


	return 0;
}
*/
