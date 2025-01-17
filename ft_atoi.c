#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int	ft_atoi(const char *str)
{
	int resolt = 0;
	int sing = 1;
	int i = 0;
	while(str[i] == 32 || str[i] >= 9 && str[i] <= 13)
	{
		i++;
	}
	if(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
		{
			sing = -1;
		}
		i++;
	}
	while(str[i] && str[i] >= '0' && str[i] <= '9')
	{
		resolt = resolt * 10 + (str[i] - '0');
		i++;
	}
	return(resolt * sing);
}

int main()
{
  int number = ft_atoi("           +133314");
  int numb = atoi("             +133314");
  printf("%d\n",number);
  printf("%d",numb);
}