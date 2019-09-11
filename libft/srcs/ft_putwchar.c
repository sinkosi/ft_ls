/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 14:59:36 by sinkosi           #+#    #+#             */
/*   Updated: 2019/09/02 14:05:31 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static void	ft_putchar_w(int n)
{
	write(1, &n, 1);
}

void		ft_putwchar(wchar_t wc)
{
	if (wc <= 127)
		ft_putchar_w(wc);
	else if (wc <= 2047)
	{
		ft_putchar_w((wc >> 6) + 0xC0);
		ft_putchar_w((wc & 0x3F) + 0x80);
	}
	else if (wc <= 65535)
	{
		ft_putchar_w((wc >> 12) + 0xE0);
		ft_putchar_w(((wc >> 6) & 0x3F) + 0x80);
		ft_putchar_w((wc & 0x3F) + 0x80);
	}
	else if (wc <= 1114111)
	{
		ft_putchar_w((wc >> 18) + 0xF0);
		ft_putchar_w(((wc >> 12) & 0x3F) + 0x80);
		ft_putchar_w(((wc >> 6) & 0x3F) + 0x80);
		ft_putchar_w((wc & 0x3F) + 0x80);
	}
}
