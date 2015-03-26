/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsgnllint_int.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbecker <bbecker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/26 15:47:18 by bbecker           #+#    #+#             */
/*   Updated: 2015/03/26 16:36:04 by bbecker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putunsgnllint_int(unsigned long long int n)
{
	int	ret;

	ret = 0;
	if (n >= 10)
	{
		ret = ret + ft_putllnbr_int(n / 10);
		ret = ret + ft_putnbr_int(n % 10);
	}
	else
	{
		ret = ret + ft_putchar_int(n + '0');
	}
	return (ret);
}
