/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dir_current.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 16:07:10 by sinkosi           #+#    #+#             */
/*   Updated: 2019/08/27 16:07:42 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_ls.h"

void	ft_dir_current(int argc, char **argv, struct dirent *attr)
{
	DIR		*directory;
	char	*path;
	char	*str;

	while ((attr = readdir(path)) != NULL)
	{
		printf("%s\t", attr->d_name);
	}
	//return ;
}
