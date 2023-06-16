#include <string.h>
#include <stdio.h>

static char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
		if(!*s++)
			return (NULL);
	return ((char *)s);
}

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	length;

	length = 0;
	while (*s)
	{
		if (ft_strchr(reject, *s))
		{	
			return (length);
		}
		else
		{
			s++;
			length++;
		}
	}
	return (length);
}


