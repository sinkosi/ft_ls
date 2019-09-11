/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handler_x_hexadecimal.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 09:45:38 by sinkosi           #+#    #+#             */
/*   Updated: 2019/08/26 14:19:53 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static void	ft_handler_x_short(t_printf *my_printf, unsigned short n)
{
	ft_print_x_hexadecimal(my_printf, n);
}

static void	ft_handler_x_char(t_printf *my_printf, unsigned char c)
{
	ft_print_x_hexadecimal(my_printf, c);
}

void		ft_handler_x_hexadecimal(t_printf *my_printf, va_list printf_list)
{
	ft_flag_check(my_printf);
	if (my_printf->h == 1)
		ft_handler_x_short(my_printf, va_arg(printf_list, unsigned int));
	else if (my_printf->h == 2)
		ft_handler_x_char(my_printf, va_arg(printf_list, unsigned int));
	else if (my_printf->l == 1)
		ft_print_x_hexadecimal(my_printf, va_arg(printf_list, long));
	else if (my_printf->l == 2)
		ft_print_x_hexadecimal(my_printf,
				va_arg(printf_list, unsigned long long));
	else if (my_printf->j == 1)
		ft_print_x_hexadecimal(my_printf, va_arg(printf_list, uintmax_t));
	else if (my_printf->z == 1)
		ft_print_x_hexadecimal(my_printf, va_arg(printf_list, size_t));
	else
		ft_print_x_hexadecimal(my_printf, va_arg(printf_list, unsigned int));
}
