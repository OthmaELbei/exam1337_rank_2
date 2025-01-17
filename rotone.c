#include <unistd.h>
#include <stdio.h>
int main(int ac,char **av)
{
	int i;
	char prnt;
	char prnwt;

	i = 0;
	
	if(ac ==  2)
	{
		while(av[1][i] != '\0')
		{
			if((av[1][i] >= 'a' || av[1][i] >= 'A') && (av[1][i] <= 'y' || av[1][i] <= 'Y'))
			{
				prnt = av[1][i] + 1;
				write(1,&prnt,1);
			}
			
		 else if((av[1][i] == 'z' || av[1][i] == 'Z' ))
		{
				prnwt = av[1][i] - 25 ;
				write(1,&prnwt,1);
			}
			i++;
		}
				write(1,"\n",1);
	}
}