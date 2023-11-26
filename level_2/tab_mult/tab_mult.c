#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	n;

	if (nb >= 10)
		ft_putnbr(nb / 10);
	n = nb % 10 + '0';
	write (1, &n, 1);
}

int	main(int argc, char ** argv)
{
	int	i;
	int	nb;
	int	j;
	int	res;

	res = 0;
	i = 0;
	j = 1;
	nb = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= '0' && argv [1][i] <= '9')
			{
				nb = nb * 10 + argv[1][i] - '0';
				i++;
			} else
				nb = 0;
				break;		
		}
		while (j < 10)
		{
			ft_putnbr(j);
			write (1, " x ", 3);
			ft_putnbr(nb);
			write (1, " = ", 3);
			res = j * nb;
			ft_putnbr(res);
			write (1, "\n", 1);
			j++;
		}
	}
	else
		write (1, "\n", 1);
}
