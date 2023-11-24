#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (*str)
	{
		c++;
		*str++;
	}
	return (c);
}

char	*ft_strdup(char *src)
{
	char *dup;
	int	len;
	int 	i;

	i = 0;
	len = ft_strlen(src);
	dup = (char *)malloc(len + 1);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
