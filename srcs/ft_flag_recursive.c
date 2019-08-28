#include "../includes/ft_ls.h"

void	ft_flag_recursive(t_dir *list, t_ls_flags *my_ls)
{
	t_dir *temp;

	temp = list;
	while (temp != NULL)
	{
		if (*temp->ft_is_dir == 1 && temp->dir[0] != '.')
			do_ls(temp->path, my_ls);
		temp = temp->next;
	}
}
