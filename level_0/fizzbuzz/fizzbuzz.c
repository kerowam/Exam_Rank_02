#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	n;

	if (nb >=10)
		ft_putnbr(nb / 10);
	n = nb % 10 + '0';
	write(1, &n, 1);
}

int	main(void)
{
	int	n;
	
	n = 1;
	while (n <= 100)
	{
		if (n % 3 == 0 && n % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (n % 3 == 0)
			write(1, "fizz", 4);
		else if (n % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_putnbr(n);
		write(1, "\n", 1);
		n++;
	}
	return (0);
}
