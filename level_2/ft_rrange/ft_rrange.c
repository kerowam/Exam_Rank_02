#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
        int     len;
        int     neg;
        int     *sec;
        int     i;

        i = 0;
        neg = 1;
        len = end - start;
        if (len < 0)
                neg = -1;
        sec = (int *)malloc(sizeof(int) * len + 1);
        while (i <= len)
        {
                sec[i] = end;
                if (neg > 0)
                        end--;
                else if (neg < 0)
                        end++;
                i++;
        }
        return (sec);
}       

