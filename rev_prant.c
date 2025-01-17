#include <unistd.h>
#include <stdio.h>

char *rev_print(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	while(i--)
	{
		write(1,&str[i],1);
	}
	return str;
}
int main()
{
	char str[] = "Hello werld";
	rev_print(str);
}