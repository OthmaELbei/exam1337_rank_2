#include <unistd.h>

int ft_tchick(char *str , char c)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			return 0;
		}
		i++;
	}
	return 1 ;
}

int main(int ac , char **av)
{
	int i;
	int j;
	int k;
	char str[256];

	i = 0;
	j = 0;
	k = 0;
	
	if (ac == 3)
	{
		while(av[1][i] != '\0')
		{
			if (ft_tchick(str,av[1][i]))
				{
					str[k] = av[1][i];
					write(1,&str[k],1);
					i++;
					k++;
				}
				else 
				{
         			 i++;
				}
		}
		while (av[2][j])
		{
			if (ft_tchick(str,av[2][j]))
				{
					str[k] = av[2][j];
					write(1,&str[k],1);
					k++;
					j++;
				}
				else 
				{
					j++;
				}
		}
		
	}
	write(1,"\n",1);
}