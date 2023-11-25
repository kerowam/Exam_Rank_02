#include <unistd.h>

int	ft_atoi(char *str)
{
	int	nb;

	nb = 0;
	while (*str != '\0')
	{
		nb *= 10;
		nb += *str - '0';
	       ++str;	
	}
	return (nb);
}

void	print_hex(int nb)
{
	char	hex[] = "0123456789abcdef";

	if (nb > 16)
		print_hex(nb / 16);
	write (1, &hex[nb % 16], 1); 
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		print_hex(ft_atoi(argv[1]));

	}
	write (1, "\n", 1);
}
