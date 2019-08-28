#include "../includes/ft_ls.h"

int		ft_time_cmp(t_dir dir1, t_dir dir2)
{
	if (dir1.ft_time < dir2.ft_time)
		return (1);
	else
		return (0);
}
