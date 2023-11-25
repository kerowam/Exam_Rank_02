#include <unistd.h>

int	main(int argc, char **argv)
{
	int	first;
	int	i;

	first = 1;
	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (first == 1)
			{
				while (argv[1][i] == 9 || argv[1][i] == 32)
					i++;
				if(argv[1][i] != 9 && argv[1][i] != 32)
				{
					write (1, &argv[1][i], 1);
					first = 0;
					i++;
				}
			} else
			{
				if ((argv[1][i] == 9 || argv[1][i] == 32) && (argv[1][i + 1] != 9 && argv[1][i + 1] != 32 && argv[1][i + 1]))
				{
					write (1, "   ", 3);
					i++;
				} else if (argv[1][i] == 9 || argv[1][i] == 32)
				       i++;	
				else if (argv[1][i] != 9 && argv[1][i] != 32)
				{
					write (1, &argv[1][i], 1);
					i++;
				}	
			}
		}	
	}
	write (1, "\n", 1);
}
