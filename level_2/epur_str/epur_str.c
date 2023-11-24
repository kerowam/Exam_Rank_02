#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	flag;

	i = 0;
	if (argc == 2)
	{
		while (argv [1][i] == 32 || argv[1][i] == 9)
                                i++;
		while (argv[1][i])
		{
			if (flag == 1 && argv[1][i] != 32 && argv[1][i] != 9 && (argv[1][i - 1] == 32 || argv[1][i - 1] == 9))
			{
				write (1, " ", 1);
				write (1, &argv[1][i], 1);
				i++;
			} else if (argv[1][i] != 32 && argv[1][i] != 9)
			{
				write (1, &argv[1][i], 1);
                                i++;
				flag = 1;
			} else if (argv [1][i] == 32 || argv[1][i] == 9)
				i++;
		}
	}
	write (1, "\n", 1);

}
