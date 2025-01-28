#include <unistd.h>
#include <libc.h>
int ft_tchick(char *str,char c)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if(str[i] == c)
		{
			return 0;
		}
		i++;
	}
	return 1;
	
}

int main(int ac, char **av)
{
	int i = 0;
	int j;
	int k = 0;
	char str[256];
	if (ac == 3)
	{
		while (av[1][i])
		{
			j = 0;
			while (av[2][j] != '\0')
			{
				if (av[1][i] == av[2][j])
				{
					if(ft_tchick(str,av[1][i]))
					{
						str[k]=av[1][i];
						write(1,&str[k],1);
						k++;
					}
					break;
				}
				j++;
			}
			i++;
		}
	}
}
