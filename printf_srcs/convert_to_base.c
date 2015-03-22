/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_to_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbecker <bbecker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/22 18:56:56 by bbecker           #+#    #+#             */
/*   Updated: 2015/03/22 19:40:04 by bbecker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		calcsize(long long nbr, int base);
{
	unsigned long long int	nb;
	int						ret;

	ret = 0;
	if (n < 0)
	{
		nb = -n, ret++;
	}
	else
		nb = nbr;
	if (nb >= base)
	{
		ret = ret + calcsize(nb / base);
		ret = ret + calcsize(nb % base);
	}
	else
	{
		ret++;
	}
	return (ret);
}

static void		ft_putinchar(long long nbr, int base)
{
	unsigned long long int	nb;
	int						ret;

	ret = 0;
	if (nbr < 0)
	{
		ft_putchar('-');
		nb = -nbr;
	}
	else
		nb = nbr;
	if (nb >= base)
	{
		ft_putinchar(nb / 10);
		ft_putinchar(nb % 10);
	}
	else
	{
		ft_putchar_int(nb + '0');
	}
}

char		*convert_dec_to_base(long long int nbr, int base)
{
	int 	x;
	char	*ret;

	x = calcsize(nbr, base);
	ret = (char *)ft_memalloc(sizeof(char) * (x + 1);
}