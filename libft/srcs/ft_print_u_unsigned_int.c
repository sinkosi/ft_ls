/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u_unsigned_int.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 09:46:39 by sinkosi           #+#    #+#             */
/*   Updated: 2019/07/28 09:46:40 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_print_u_unsigned_int(t_printf *my_printf, uintmax_t n)
{
	char	*str;

	str = ft_ltoa_printf(n);
	ft_flag_size(my_printf, ft_strlen(str));
	ft_flag_width(my_printf);
	ft_flag_precision(my_printf, str);
	ft_putstr(str);
	my_printf->f_return += ft_strlen(str);
	ft_flag_width(my_printf);
	ft_strdel(&str);
}

void	ft_print_u_unsigned_int_fd(t_printf *my_printf, uintmax_t n, int fd)
{
	char	*str;

	str = ft_ltoa_printf(n);
	ft_flag_size(my_printf, ft_strlen(str));
	ft_flag_width_fd(my_printf, fd);
	ft_flag_precision_fd(my_printf, str, fd);
	ft_putstr_fd(str, fd);
	my_printf->f_return += ft_strlen(str);
	ft_flag_width_fd(my_printf, fd);
	ft_strdel(&str);
}
