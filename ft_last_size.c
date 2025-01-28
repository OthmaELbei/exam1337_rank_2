#include <unistd.h>
#include <stdio.h>

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

int	ft_list_size(t_list *begin_list)
{
	t_list *list;
  int cont = 0;
	list = begin_list;
	while(list != NULL)
	{
		cont++;
		list = list->next;
	}
	return cont;

}
