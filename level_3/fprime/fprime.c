#include <stdio.h>
#include <stdlib.h>

void	main(int argc, char **argv)
{
	int	nb;
	int	i;

	i = 2;
	if (argc == 2)
	{
		nb = atoi(argv[1]);
		if (nb == 1)
			printf("1");
		while (nb >= i)
		{
			if (nb % i == 0)
			{
				printf("%d", i);
				if (nb > i)
				{
					printf("*");
					nb = nb / i;
					i = 2;
				}
			}
			i++;
		}

	}
	printf("\n");
	return;
}
