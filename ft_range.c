#include <unistd.h>
#include <stdio.h>
#include  <stdlib.h>

int     *ft_range(int start, int end)
{
	int i = 0;
	int len = (end - start);
	int *range = (int *)malloc((end - start) * sizeof(int));
	while (i < (len))
	{
		if (start < end)
		{
			range[i] = start;
			start++;
			i++;
		}
		else
		{
			range[i] = start;
			start--;
			i++;
		}
	}
	return (range);
}


int main()
{
    int *range;
    int start = -23;
    int end = 0 ;
    int len = end - start;
    int i;

    range = ft_range(start, end);
    if (!range)
    {
        printf("Memory allocation failed\n");
        return (1);
    }

    for (i = 0; i < len; i++)
        printf("%d ", range[i]);
    printf("\n");

    free(range);
    return (0);
}
