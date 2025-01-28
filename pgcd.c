#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int main(int ac, char **av)
{
	int nmb1;
	int nbr2;
	int time;
	if(ac == 3)
	{
		if((nmb1 = atoi(av[1])) > 0 && (nbr2 = atoi(av[2]) ) > 0)
		{
			while(nbr2 != 0)
			{
				time = nbr2;
				nbr2 = nmb1 % nbr2;
				nmb1 = time;
			}
			printf("%d",nmb1);

		}
	}
}
// int main(int ac, char **av)
// {
// 	int npm1 = 0 ;
// 	int npm1 = 0 ;
// 	if () }