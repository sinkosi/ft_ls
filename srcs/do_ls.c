#include "../includes/ft_ls.h"

void	do_ls(char *dir, t_ls_flags *e)
{
	t_dir	*list;
	t_dir	*temp;

	list = NULL;
	if ((e->dir_path = opendir(dir)) != NULL)
	{
		while ((e->dirent_dir = readdir(e->dir_path)) != NULL)
		{
			if (e->dirent_dir->d_name[0] != '.' || e->flag_a == 1)
			{
				temp = (t_dir *)malloc(sizeof(t_dir));
				temp->dir = e->dirent_dir->d_name;
				temp->path = ft_strjoin(ft_strjoin(dir, "/"),
						e->dirent_dir->d_name);
				lstat(temp->path, &e->ft_ls_stat);
				temp->ft_time = e->ft_ls_stat.st_mtime;
				if (S_ISDIR(e->ft_ls_stat.st_mode) == 1)
					temp->ft_is_dir = 1;
				temp->next = list;
				list = temp;
			}
		}
		ft_sort_list(&list, ft_dir_strcmp, 0);
		ft_ls_print(list, e, dir);
	}
}
