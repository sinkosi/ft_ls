#include "../includes/ft_ls.h"

void	ft_free_dir(t_dir *my_ls)
{
	/*free(&my_ls->ft_is_dir);
	free(&my_ls->ft_time);*/
	free(my_ls->path);
	free(my_ls->dir);
	free(my_ls);
}