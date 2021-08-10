#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	length;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = (int *) malloc(sizeof(int) * (max - min));
	if (!range)
		return (-1);
	i = 0;
	length = max - min;
	while (min < max)
	{
		range[0][i] = min;
		i++;
		min++;
	}
	return (length);
}

/*
#include <stdio.h>
int	main(int argc, char *argv[])
{	
	if (argc == 3)
	{
		int	i;
		int *range;
		int min = atoi(argv[1]);
		int max = atoi(argv[2]);
		int length = ft_ultimate_range(&range, min, max);
		
		printf("Length: %d\n", length);
		while (i < (max - min))
		{
			printf("range[%d]: %d\n", i, range[i]);
			i++;
		}
	}
	return (0);
}
*/
