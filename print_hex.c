#include <unistd.h>
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
void ft_hexdesmal(int n)
{
	char str[16] = "0123456789abcdef";
    
	if(n >16 )
	{
		ft_hexdesmal(n / 16);
	}
	write(1,&str[n%16],1);
    
}

int main(int ac, char **av)
{
int nber  = ft_atoi(av[1]);
    ft_hexdesmal(nber);

}