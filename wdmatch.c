#include <unistd.h>

int ft_tchic(char *str, char c)
{
	int i;
    
	i = 0;
	while(str[i] != '\0')
	{
		if (str[i] == c)
		{
			return 1;
		}
		i++;
	}
	return 0;
}

int ft_strline (char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return i;
}

int main(int ac , char **av)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char *str;
	if (ac == 3)
	{
		str = av[2];
		while(av[1][i] != '\0')
		{
			while (av[2][j] != '\0')
			{
				if(av[1][i] == av[2][j])
				{
					k++;
					i++;
				}
				j++;
			}
			i++;
		}
		if(ft_strline(av[1]) == k)
		{
			i = 0;
			while (av[1][i])
			{
				write(1,&av[1][i],1);
				i++;
			}
		}
		else
			write(1,"\n",1);
	}
}