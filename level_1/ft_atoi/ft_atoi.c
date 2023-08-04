int	ft_atoi(const char *str)
{
	int	neg;
	int	nb;
	int	i;

	neg = 1;
	nb = 0;
	i = 0;

	if (str[i] == '-')
	{
		neg = -1;
		i++;
	} else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	nb *= neg;
	return (nb);
}
