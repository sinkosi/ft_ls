#include "../includes/ft_ls.h"

void	do_list(t_ls_flags *my_ls)
{
	my_ls->dir_list = (t_dir *)malloc(sizeof(t_dir));
	my_ls->dir_list->dir = ".";
	my_ls->dir_list->next = NULL;
}

void	ft_ls(t_ls_flags *my_ls)
{
	t_dir	*temp;

	temp = my_ls->dir_list;
	while (temp != NULL)
	{
		do_ls(temp->dir, my_ls);
		temp = temp->next;
	}
}
