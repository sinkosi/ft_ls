/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls_p_permission.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 11:29:20 by sinkosi           #+#    #+#             */
/*   Updated: 2019/08/27 11:32:09 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_ls.h"

void	ft_ls_p_permission(t_dir *my_ls, struct stat ft_ls_stat)
{
	char	*perm;

	if (my_ls->ft_is_dir)
		perm[0] = ('d');
	else
		perm[0] = ((S_ISLNK(ft_ls_stat.st_mode)) ? 'l' : '-');
	ft_strchrcat(perm, (ft_ls_stat.st_mode & S_IRUSR) ? 'r' : '-');
	ft_strchrcat(perm, (ft_ls_stat.st_mode & S_IWUSR) ? 'w' : '-');
	ft_strchrcat(perm, (ft_ls_stat.st_mode & S_IXUSR) ? 'x' : '-');
	ft_strchrcat(perm, (ft_ls_stat.st_mode & S_IWGRP) ? 'w' : '-');
	ft_strchrcat(perm, (ft_ls_stat.st_mode & S_IWGRP) ? 'x' : '-');
	ft_strchrcat(perm, (ft_ls_stat.st_mode & S_IROTH) ? 'r' : '-');
	ft_strchrcat(perm, (ft_ls_stat.st_mode & S_IWOTH) ? 'w' : '-');
	ft_strchrcat(perm, (ft_ls_stat.st_mode & S_IXOTH) ? 'x' : '-');
	ft_strcat(perm, " ");
	ft_putstr(perm);
}