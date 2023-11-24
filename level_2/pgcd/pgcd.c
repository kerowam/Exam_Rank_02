#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	nb1;
	int	nb2;
	
	if (argc == 3)
	{
		nb1 = atoi(argv[1]);
		nb2 = atoi(argv[2]);
		if (nb1 > 0 && nb2 > 0)
		{
			int	i;
			if (nb1 > nb2)
				i = nb2;
			else
				i = nb1;
			while (i > 1)
			{
				if (nb1 % i == 0 && nb2 % i == 0)
				{
					printf ("%d", i);
					i = 0;
				}
				i--;
			}
		}
	}
	printf ("\n");
}
