#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	*values;
	int	range;
	int	i;

	i = 0;
	/*if (!end)
	{
		range = 1;
		*values = (int *)malloc(sizeof(int));
		values[0] = start;
	       free(*values);
       		return(*values);	       
		
	}*/
	
	range = abs((end - start)) + 1;
	values = (int *)malloc(sizeof(int) * range);

	while (i < range)
	{
		if (start < end)
		{
			values[i] = start;
			start++;
			i++;
		} else 
		{
			values[i] = start;
			start--;
			i++;
		}
	}	
	return (values);
}
