/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handler_u_unsigned_int.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 09:45:17 by sinkosi           #+#    #+#             */
/*   Updated: 2019/07/28 14:43:37 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static void	ft_handler_u_short(t_printf *my_printf, unsigned short n)
{
	ft_print_u_unsigned_int(my_printf, n);
}

static void	ft_handler_u_char(t_printf *my_printf, unsigned char c)
{
	ft_print_u_unsigned_int(my_printf, c);
}

void		ft_handler_u_unsigned_int(t_printf *my_printf, va_list printf_list)
{
	ft_flag_check(my_printf);
	if (my_printf->h == 1)
		ft_handler_u_short(my_printf, va_arg(printf_list, unsigned int));
	else if (my_printf->h == 2)
		ft_handler_u_char(my_printf, va_arg(printf_list, unsigned int));
	else if (my_printf->l == 1)
		ft_print_u_unsigned_int(my_printf, va_arg(printf_list, unsigned long));
	else if (my_printf->l == 2)
		ft_print_u_unsigned_int(my_printf,
				va_arg(printf_list, unsigned long long));
	else if (my_printf->j == 1)
		ft_print_u_unsigned_int(my_printf, va_arg(printf_list, uintmax_t));
	else if (my_printf->z == 1)
		ft_print_u_unsigned_int(my_printf, va_arg(printf_list, size_t));
	else
		ft_print_u_unsigned_int(my_printf, va_arg(printf_list, unsigned int));
}
