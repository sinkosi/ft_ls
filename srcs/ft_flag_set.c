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

int	ft_flag_set(t_ls_flags *ft_ls, char *parse)
{
	int	i;

	i = 1;
	while (parse[i] != '\0')
	{
		if (parse[i] == 'l')
			ft_ls->flag_l = 1;
		else if (parse[i] == 'R')
			ft_ls->flag_recursive = 1;
		else if (parse[i] == 'a')
			ft_ls->flag_a = 1;
		else if (parse[i] == 'r')
			ft_ls->flag_r = 1;
		else if (parse[i] == 't')
			ft_ls->flag_t = 1;
		else
		{
			printf("ft_ls: illegal option -- %c\n", parse[i]);
			printf("usage: ft_ls [-Ralrt] [file ...]\n");
			return (0);
		}
		i++;
	}
	return (1);
}
