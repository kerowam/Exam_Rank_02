#include <unistd.h>

void	ft_put_nbr(int nb)
{
	char	n;
	if (nb >= 10)
		ft_put_nbr(nb / 10);
	n = nb % 10 + '0';
	write (1, &n, 1);
}


int	main(int argc, char **argv)
{
	int	n;

	if (argc == 1)
		write (1, "0", 1);
	else if (argc > 1)
	{
		n = argc - 1;
		ft_put_nbr(n);				
	}
	write (1, "\n", 1);
	return (0);
}
