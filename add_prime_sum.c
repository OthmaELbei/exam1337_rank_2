#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ft_putshar(char c)
{
	write(1,&c,1);
}
void ft_putnper(int nb)
{
	if(nb < 0)
	{
		ft_putshar('-');
		nb = -nb;
	}
	else if (nb > 9)
	{
		ft_putnper(nb/10);
	
	}
		ft_putshar((nb % 10) + '0');
}
int ft_atoi(char *str)
{
	int i = 0;
	int resolt = 0;
	int sing = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sing = -1;
		}
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		resolt = resolt * 10 + str[i] - '0';
		i++;
	}
	return (resolt * sing);
}

int prim(int n)
{
int i = 2;
while(i * i <= n)
{
	if(n % i == 0)
	{
		return 0;
	}
	i++;
}
	return 1;
}
int main (int ac , char **av)
{
	int i = 2;
	int total = 0;
	int number = 0;
	if (ac == 2)
	{
		number = ft_atoi(av[1]);
		if (number <= 1)
		{
			write(1,"0",1);
			return 0;
		}
		while (i <= number)
		{
			if(prim(i))
			{
				total += i ;
			}
			i++;
		}
      ft_putnper(total);
	}
}