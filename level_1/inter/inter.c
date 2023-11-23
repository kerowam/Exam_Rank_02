#include <stdio.h>
#include <stdbool.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	char	c;
	int	k;
	bool	rep;

	rep = false;
	i = 0;
	j = 0;
	if (argc == 3)
	{
		while(argv[1][i] != '\0')
		{
			c = argv[1][i]; 
			rep = false;
			k = i - 1;
			while (k >= 0)
			{
				if (argv[1][k] == c)
				{
					i++;
					rep = true;
					break;
				}
				k--;
			}
			if (!rep)
			{
				while (argv[2][j] != '\0')
				{
					if (c == argv[2][j])
					{
						write(1, &c, 1);
						j = 0;
						break;
					}
					j++;
				}
				if (argv[2][j] == '\0' && argv[1][i] != '\0')
				{
					j = 0;
				}
				i++;
			}
		}
		

	}
	write(1, "\n", 1);
	return (0);
}
