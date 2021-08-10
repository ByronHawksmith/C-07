#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*array;

	if (min >= max)
		return (0);
	i = 0;
	array = malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}

/*
#include <stdio.h>
int	main(int argc, char *argv[])
{
	int	*p;
	int	i;

	p = ft_range(atoi(argv[1]), atoi(argv[2]));
	if (argc > 0)
	{
		while (p[i])
		{
			printf("%d\n", p[i]);
			i++;
		}
	}
	return (0);
}
*/
