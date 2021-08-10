#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dst, char *src)
{
	while (*src)
	{
		*dst = *src;
		dst++;
		src++;
	}
	return (dst);
}

int	calc_total_length(char **strs, int size, int strs_length)
{	
	int	i;

	i = 0;
	while (i < size)
	{
		strs_length += ft_strlen(strs[i]);
		i++;
	}
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*concat;
	char	*tmp;
	int		strs_length;
	int		i;

	if (!size)
	{
		concat = ((char *) malloc(1));
		concat[0] = 0;
		return (concat);
	}
	strs_length = 0;
	calc_total_length(strs, size, strs_length);
	concat = (char *) malloc(strs_length + ((size - 1) * ft_strlen(sep)) + 1);
	tmp = ft_strcpy(concat, strs[0]);
	i = 1;
	while (i < size)
	{
		tmp = ft_strcpy(tmp, sep);
		tmp = ft_strcpy(tmp, strs[i]);
		i++;
	}
	*tmp = 0;
	return (concat);
}

/*
#include <stdio.h>
int	main(int argc, char *argv[])
{
	printf("%s\n", ft_strjoin(argc, argv, "..."));
}
*/
