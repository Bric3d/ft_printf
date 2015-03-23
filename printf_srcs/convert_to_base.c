/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_to_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbecker <bbecker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/22 18:56:56 by bbecker           #+#    #+#             */
/*   Updated: 2015/03/23 16:31:38 by bbecker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		calcsize(long long int nbr, int base)
{
	unsigned long long int	nb;
	int						ret;

	ret = 0;
	if (nbr < 0)
	{
		nb = -nbr, ret++;
	}
	else if (nbr == 0)
		return (1);
	else
		nb = nbr;
	while (nb > 0)
	{
		nb = nb / base;
		ret++;
	}
	return (ret);
}

static void		ft_putinchar(long long int nb, char *ret, int i)
{
	if (nb == -1)
		ret[i] = '-';
	if (nb >= 0 && nb <= 9)
		ret[i] = nb + '0';
	else if (nb >= 10)
		ret[i] = nb - 10 + 'a';
}

static void		ft_convert(long long int nbr, int base, char *ret, int len)
{
	int i;

	if (nbr < 0)
	{
		ft_putinchar(-1, ret, 0);
		nbr = -nbr;
	}
	i = len - 1;
	if (nbr == 0)
		ft_putinchar(0, ret, i);
	while (nbr > 0)
	{
		ft_putinchar(nbr % base, ret, i);
		nbr = nbr / base;
		i--;
	}
	ret[len] = 0;
}

char		*convert_dec_to_base(long long int nbr, int base)
{
	int 	x;
	char	*ret;

	x = calcsize(nbr, base);
	ret = (char *)ft_memalloc(sizeof(char) * (x + 1));
	ft_convert(nbr, base, ret, x);
	return (ret);
}