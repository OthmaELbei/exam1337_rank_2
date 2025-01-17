#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int i = 0;
	int ap1;
	int ap3;
	int resolt;
if(ac == 4)
{
   ap1 = atoi(av[1]);
   ap3 = atoi(av[3]);
   if(av[2][0] == '*')
   {
    resolt = ap1 * ap3;
	printf("%d",resolt);
   }
   else if(av[2][0] == '/')
   {
    resolt = ap1 / ap3;
	printf("%d",resolt);
   }
   else if(av[2][0] == '+')
   {
    resolt = ap1 + ap3;
	printf("%d",resolt);
   }
   printf("\n");

}
}