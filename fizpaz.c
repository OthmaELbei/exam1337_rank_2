#include <unistd.h>
#include <stdio.h>
void ft_write(int i)
{
	char str[10] = "0123456789";
	if(i > 9)
	ft_write(i / 10);
	write(1,&str[i % 10],1);
}
int main()
{
	int i = 1 ;
	while(i <= 100)
	{
		if((i % 15 == 0))
		{
			write(1,"fuzzbuzz",8);
		}
		else if ((i % 3 == 0))
		{
			write(1,"fuzz",4);
		}
		else if((i % 5 == 0))
		{
			write(1,"buzz",4);
		}
		else
		{
			ft_write(i);
		}
			write(1,"\n",1);
		i++;
	
	}
}