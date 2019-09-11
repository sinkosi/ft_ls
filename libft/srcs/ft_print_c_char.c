/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 11:19:13 by sinkosi           #+#    #+#             */
/*   Updated: 2019/07/17 11:19:17 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_print_c_char(t_printf *my_printf, int c)
{
	ft_flag_size(my_printf, 1);
	ft_flag_width(my_printf);
	if (my_printf->convert == 'C')
		ft_putwchar((wchar_t)c);
	else
		ft_putchar(c);
	ft_flag_width(my_printf);
	my_printf->f_return += 1;
}

void	ft_print_c_char_fd(t_printf *my_printf, int c, int fd)
{
	ft_flag_size(my_printf, 1);
	ft_flag_width_fd(my_printf, fd);
	if (my_printf->convert == 'C')
		ft_putwchar_fd((wchar_t)c, fd);
	else
		ft_putchar_fd(c, fd);
	ft_flag_width_fd(my_printf, fd);
	my_printf->f_return += 1;
}
