/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_set.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 10:54:44 by sinkosi           #+#    #+#             */
/*   Updated: 2019/08/27 16:08:10 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_ls.h"

void	ft_flag_set(t_ls_flags *ft_ls, char c)
{
	if (c == 'l')
		ft_ls->flag_l = 1;
	if (c == 'R')
		ft_ls->flag_recursive = 1;
	if (c == 'a')
		ft_ls->flag_a = 1;
	if (c == 'r')
		ft_ls->flag_r = 1;
	if (c == 't')
		ft_ls->flag_t = 1;
	else
	{
		printf("ft_ls: illegal option -- %c\n", c);
		printf("usage: ft_ls [-Ralrt] [file ...]\n");
	}
}
