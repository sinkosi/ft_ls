/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 15:25:56 by sinkosi           #+#    #+#             */
/*   Updated: 2019/08/27 16:05:21 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_ls.h"

int	main(int argc, char **argv)
{
	DIR				*path;
	char			*str;
	struct dirent	*attr;

	if (argc <= 1)
	{
		str = ".";
	}
	else
		str = argv[1];
	path = opendir(str);
	if (path == NULL)
	{
		printf("YOU SUCK MAN!");
		return (0);
	}
	//ft_dir_current(argc, argv, attr);
	while ((attr = readdir(path)) != NULL)
	{
		printf("%s\t", attr->d_name);
	}
	return (0);
}
