#include <unistd.h>

void	ft_putchar(char c, int rep)
{
	while (rep > 0)
	{
		write (1, &c , 1);
	       rep--;	
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	rep;

	rep = 0;
	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				rep = argv[1][i] + 1 - 'a';
				ft_putchar (argv[1][i], rep);
			} else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				rep = argv[1][i] + 1 - 'A';
				ft_putchar (argv[1][i], rep);
			}
			else
				write (1, &argv[1][i], 1);
			i++;

		}	
	}
	write (1, "\n", 1);
}
