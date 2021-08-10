#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dup;

	dup = (char *) malloc(sizeof(src) + 1);
	ft_strcpy(dup, src);
	return (dup);
}

/*
#include <stdio.h>
int	main()
{
	char *str = "Hello!";
	char *str2 = ft_strdup(str);

	printf("Duplicate string: %s", str2);
}
*/
