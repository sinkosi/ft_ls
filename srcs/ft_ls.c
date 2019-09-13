/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 15:25:56 by sinkosi           #+#    #+#             */
/*   Updated: 2019/09/01 13:18:58 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_ls.h"

int	main(int argc, char **argv)
{
	int			i;
	t_ls_flags	my_ls;
	t_dir		*temp;

	i = 1;
	my_ls.dir_list = NULL;
	while (i < argc)
	{
		if (argv[i][0] != '-' && (temp = (t_dir *)malloc(sizeof(t_dir))))
		{
			temp->dir = argv[i];
			temp->next = my_ls.dir_list;
			my_ls.dir_list = temp;
			ft_printf("ft_ls: %s: No such file or directory\n", argv[i]);
			/*ft_putstr("ft_ls: ");
			ft_putstr(argv[i]);
			ft_putendl(": No such file or directory");*/
		}
		else if (ft_ls_flag_set(&my_ls, argv[i]) == 0)
			return (0);
		i++;
	}
	if (my_ls.dir_list == NULL)
		do_list(&my_ls);
	ft_ls(&my_ls);
	return (0);
}
