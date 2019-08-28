#include "../includes/ft_ls.h"

int		add_args(t_ls_flags *e, char *arg)
{
	int	x;

	x = 1;
	while (arg[x] != '\0')
	{
		if (arg[x] == 'l')
			e->flag_l = 1;
		else if (arg[x] == 'a')
			e->flag_a = 1;
		else if (arg[x] == 'r')
			e->flag_r = 1;
		else if (arg[x] == 't')
			e->flag_t = 1;
		else if (arg[x] == 'R')
			e->flag_recursive = 1;
		else
		{
			ft_putstr(arg);
			ft_putendl(": Invalid argument");
			return (0);
		}
		x++;
	}
	return (1);
}
