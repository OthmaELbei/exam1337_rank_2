#include <unistd.h>
#include <stdio.h>

int main(int ac,char **av)
{
	int  i = 0;
	int j = 0;
	int k = 0;
	int len;
	if (ac == 3)
	{
		while(av[1][len] != '\0')
	{
		len++;
	}
      while(av[1][i] != '\0')
	  {
		while(av[2][j] != '\0')
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
	  if(k == len)
	  {
			write(1,"1",1);
	  }else
			write(1,"0",1);
	}
		write(1,"\n",1);
}