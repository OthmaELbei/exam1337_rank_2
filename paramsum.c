#include <unistd.h>
#include <stdio.h>
void ft_paramsum(int ac)
{
	char n;
	if(ac  >= 10)
	{
		ft_paramsum(ac /10);

	}
	n = (ac % 10 + '0');
	write(1,&n,1);
	}


int main(int ac, char **av)
{
   ft_paramsum(ac - 1);
}

