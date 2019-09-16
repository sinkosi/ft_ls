/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handler_convert.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 11:10:00 by sinkosi           #+#    #+#             */
/*   Updated: 2019/09/16 10:14:54 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_handler_convert(t_printf *my_printf, va_list printf_list, int fd)
{
	if (my_printf->convert == 'i' || my_printf->convert == 'd' ||
			my_printf->convert == 'D')
		ft_handler_d_int(my_printf, printf_list, fd);
	else if (my_printf->convert == 'c' || my_printf->convert == 'C')
		ft_handler_c_char(my_printf, printf_list, fd);
	else if (my_printf->convert == 's' || my_printf->convert == 'S')
		ft_handler_s_str(my_printf, printf_list, fd);
	else if (my_printf->convert == '%' || my_printf->convert == '\%')
		ft_print_mod(my_printf, fd);
}
