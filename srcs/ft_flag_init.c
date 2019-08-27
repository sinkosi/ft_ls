/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 16:06:09 by sinkosi           #+#    #+#             */
/*   Updated: 2019/08/27 16:06:51 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_ls.h"

void	ft_flag_init(t_ls_flags *ft_ls)
{
	ft_ls->flag_l = 0;
	ft_ls->flag_recursive = 0;
	ft_ls->flag_a = 0;
	ft_ls->flag_r = 0;
	ft_ls->flag_t = 0;
}
