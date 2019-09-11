/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handler_d_int.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 09:44:59 by sinkosi           #+#    #+#             */
/*   Updated: 2019/08/28 15:41:27 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static void	ft_handler_d_char(t_printf *my_printf, char c)
{
	ft_print_d_int(my_printf, c);
}

static void	ft_handler_d_short(t_printf *my_printf, short n)
{
	ft_print_d_int(my_printf, n);
}

void		ft_handler_d_int(t_printf *my_printf, va_list printf_list)
{
	ft_flag_check(my_printf);
	if (my_printf->h == 1)
		ft_handler_d_short(my_printf, va_arg(printf_list, int));
	else if (my_printf->h == 2)
		ft_handler_d_char(my_printf, va_arg(printf_list, int));
	else if (my_printf->l == 1)
		ft_print_d_int(my_printf, va_arg(printf_list, long));
	else if (my_printf->l == 2)
		ft_print_d_int(my_printf, va_arg(printf_list, long long));
	else if (my_printf->j == 1)
		ft_print_d_int(my_printf, va_arg(printf_list, intmax_t));
	else if (my_printf->z == 1)
		ft_print_d_int(my_printf, va_arg(printf_list, size_t));
	else
		ft_print_d_int(my_printf, va_arg(printf_list, int));
}
