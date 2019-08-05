/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 15:25:56 by sinkosi           #+#    #+#             */
/*   Updated: 2019/07/29 15:26:46 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_ls.h"

int main(int argc, char **argv)
{
    DIR		*path;
	struct dirent	*attr;

	if (argc <= 1)
	{
		return (0);
	}
	path = opendir(argv[1]);

	if (path == NULL)
	{
		printf("YOU SUCK MAN!");
		return (0);
	}
	while ((attr = readdir(path)) != NULL)
	{
		printf("%s\t", attr->d_name);
	}
	return (0);
}