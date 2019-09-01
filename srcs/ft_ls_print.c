/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 13:15:26 by sinkosi           #+#    #+#             */
/*   Updated: 2019/09/01 13:15:29 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_ls.h"

void	ft_ls_print(t_dir *my_ls, t_ls_flags *my_ls_flags, char *path)
{
	t_dir	*temp;

	if (my_ls_flags->flag_t == 1)
		ft_sort_list(&my_ls, ft_time_cmp, 0);
	if (my_ls_flags->flag_r == 1)
		ft_rev_list(&my_ls);
	if (my_ls_flags->flag_recursive == 1)
		ft_putstr(ft_strjoin(path, ":\n"));
	if (my_ls_flags->flag_l == 1)
		ft_ls_p_long_list(my_ls);
	else
	{
		temp = my_ls;
		while (temp != NULL)
		{
			ft_putstr(temp->dir);
			temp = temp->next;
			if (temp != NULL)
				ft_putchar('\n');
		}
	}
	ft_putchar('\n');
	if (my_ls_flags->flag_recursive == 1)
		ft_flag_recursive(my_ls, my_ls_flags);
}
