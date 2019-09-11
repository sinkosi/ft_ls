/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handler_b_binary.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 09:43:42 by sinkosi           #+#    #+#             */
/*   Updated: 2019/08/28 10:50:09 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static void	ft_handler_b_short(t_printf *my_printf, unsigned short n)
{
	ft_print_b_binary(my_printf, n);
}

static void	ft_handler_b_char(t_printf *my_printf, unsigned char c)
{
	ft_print_b_binary(my_printf, c);
}

void		ft_handler_b_binary(t_printf *my_printf, va_list printf_list)
{
	ft_flag_check(my_printf);
	if (my_printf->h == 1)
		ft_handler_b_short(my_printf, va_arg(printf_list, unsigned int));
	else if (my_printf->h == 2)
		ft_handler_b_char(my_printf, va_arg(printf_list, unsigned int));
	else if (my_printf->l == 1)
		ft_print_b_binary(my_printf, va_arg(printf_list, unsigned long));
	else if (my_printf->l == 2)
		ft_print_b_binary(my_printf, va_arg(printf_list, unsigned long long));
	else if (my_printf->j == 1)
		ft_print_b_binary(my_printf, va_arg(printf_list, uintmax_t));
	else if (my_printf->z == 1)
		ft_print_b_binary(my_printf, va_arg(printf_list, size_t));
	else
		ft_print_b_binary(my_printf, va_arg(printf_list, unsigned int));
}
