/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls_p_long_list.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 13:58:07 by sinkosi           #+#    #+#             */
/*   Updated: 2019/09/11 11:20:30 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_ls.h"

void	ft_ls_p_long_list(t_dir *list)
{
	t_dir		*temp;
	struct stat	fstat;
	char		*bytes;
	int			len;
	int			i;

	temp = list;
	i = ft_ls_strlen(temp);
	while (temp != NULL)
	{
		lstat(temp->path, &fstat);
		ft_ls_p_permission(temp, fstat);
		ft_printf("%d %s", fstat.st_nlink, ft_get_user(fstat));
		//ft_putstr(" ");
		//ft_putstr(ft_get_user(fstat));
		bytes = ft_ltoa_base(fstat.st_size, 10);
		len = i;
		while (len-- > ft_strlen(bytes))
			ft_putchar(' ');
		ft_putstr(ft_strjoin(bytes, " "));
		ft_get_time(fstat, temp);
		temp = temp->next;
		if (temp != NULL)
			ft_putchar('\n');
	}
}
