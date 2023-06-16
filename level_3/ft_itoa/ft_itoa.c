#include <stddef.h>

static size_t	ft_nbr_len(long nb)
{	
	size_t len;

	len = 0;
	if (nb == 0)
	{
		len++;
		return (len);
	}
	if (nb < 0)
	{
		len++;
		nb = nb * -1;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	char 	*str;
	size_t	len;
	long	lng_nb;

	lng_nb = nbr;
	len = ft_nbr_len(lng_nb);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return(0);
	str[len--] = '\0';
	if (lng_nb == 0)
		str[0] = '0';
	else if (lng_nb < 0)
	{
		str[0] = '-';
		lng_nb = lng_nb * -1;
	}
	while (lng_nb > 0)
	{
		str[len] = (lng_nb % 10) + '0';
		lng_nb = lng_nb / 10;
		len--;
	}
	return (str);
}
