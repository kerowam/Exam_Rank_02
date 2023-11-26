#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	j = 1;
	i = 0;	
	if (argc > 1)
	{
		while (argv[j])
		{
			while (argv[j][i])
			{
				if (argv[j][i] >= 'A' && argv[j][i] <= 'Z')
					argv[j][i] += 32;
				i++;
			}
			i = 0;
			while (argv[j][i])
			{
				if (argv[j][0] >= 'a' && argv[j][0] <= 'z')
				{
					argv[j][0] -= 32;
					write (1, &argv[j][0], 1);
				} else if ((argv[j][i] >= 'a' && argv[j][i] <= 'z') && (argv[j][i - 1] == 32 || argv[j][i - 1] == 9))
				{
                                        argv[j][i] -= 32;
                                	write (1, &argv[j][i], 1);
                                } else
					write (1, &argv[j][i], 1);
				i++;
			}
			i = 0;
			j++;
			write (1, "\n", 1);
		}		
	} else
		write (1, "\n", 1);
}
