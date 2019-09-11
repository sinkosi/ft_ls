/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 16:09:32 by sinkosi           #+#    #+#             */
/*   Updated: 2019/09/02 13:53:37 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putwstr(wchar_t *wstr)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = (sizeof(wstr) / 2);
	while (i < n)
	{
		ft_putwchar(wstr[i]);
		i++;
	}
}
