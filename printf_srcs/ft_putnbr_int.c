/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbecker <bbecker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/22 14:28:51 by bbecker           #+#    #+#             */
/*   Updated: 2015/03/22 14:31:52 by bbecker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_int(int n)
{
	unsigned int	nb;
	int				ret;

	ret = 0;
	if (n < 0)
	{
		ft_putchar('-');
		nb = -n, ret++;
	}
	else
		nb = n;
	if (nb >= 10)
	{
		ret = ret + ft_putnbr_int(nb / 10);
		ret = ret + ft_putnbr_int(nb % 10);
	}
	else
	{
		ret = ret + ft_putchar_int(nb + '0');
	}
	return (ret);
}
