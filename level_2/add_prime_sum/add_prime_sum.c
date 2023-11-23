#include <unistd.h>

int	ft_atoi(char *s)
{
	int	nb;

	nb = 0;
	while(*s)
	{
		nb = nb * 10 + *s - 48;
		*s++;
	}
	return (nb);
}

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i * i <= nb)
	{
		if(nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	ft_put_nbr(int nb)
{
	char	nbr;

	if(nb >= 10)
	{
		ft_put_nbr(nb / 10);
	}
	nbr = nb % 10 + '0';
	write(1, &nbr, 1);
}

int	main(int argc, char **argv)
{
	int	nb;
	int	res;

	res = 0;
	nb = 0;
	if (argc == 2)
	{
		nb = ft_atoi(argv[1]);
		while (nb >= 2)
		{
			if(ft_is_prime(nb))
				res += nb;
			nb--;
		}	
		ft_put_nbr(res);
	} else
	{
		write(1, "0", 1);
	}
	write(1, "\n", 1);
	return(0);
}
