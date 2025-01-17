#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strline(char *src)
{
	int i = 0;
	while(src[i] != '\0')
	{
		i++;
	}
	return i;
}
char    *ft_strdup(char *src)
{
	int i =0 ;
	if(src == NULL)
	{
		return NULL;
	}
	char *str = malloc(ft_strline(src));
	if(!str)
	{
		return NULL;
	}
	while(src[i] != '\0')
	{
		src[i] = str[i];
		i++;
	}
	return str;
}
