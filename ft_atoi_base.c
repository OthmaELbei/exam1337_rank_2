#include <stdio.h>

#include <unistd.h>

int	ft_atoi_base(const char *str, int str_base)
{
	int i = 0;
	int resolt = 0;
	// int str_base = 16;
	// char str[16] = "0123456789abcdef"

	
			while (str[i] )
			{
				if (str[i] >= '0' && str[i] <= '9')
				 resolt = resolt * str_base + str[i] - '0';
				else if (str[i] >= 'a' && str[i] <= 'f')
				  resolt = resolt * str_base + (str[i] - 'a' + 10);
				else if (str[i] >= 'A' && str[i] <= 'F')
				  resolt = resolt * str_base + (str[i] - 'A' + 10);
				  else 
				  	break;
				i++;
			}
  return(resolt);
		 }
	

int main()
{
    printf("%d", ft_atoi_base("10101110",2));
} 
