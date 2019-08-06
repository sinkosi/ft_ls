#include "../includes/ft_ls.h"

void    ft_flag_init(t_ls_flags *ft_ls)
{
	ft_ls->flag_l = 0;
	ft_ls->flag_recursive = 0;
	ft_ls->flag_a = 0;
	ft_ls->flag_r = 0;
	ft_ls->flag_t = 0;
}