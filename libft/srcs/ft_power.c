/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 13:44:39 by sinkosi           #+#    #+#             */
/*   Updated: 2019/06/24 13:44:54 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_power(int nb, int power)
{
	if (power < 0)
		return (-1);
	else if (power == 0)
		return (1);
	while (power > 1 && (ft_isimax(nb) == 0))
	{
		nb *= nb;
		power--;
	}
	return (nb);
}
