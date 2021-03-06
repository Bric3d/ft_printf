/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printaddr_int.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbecker <bbecker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/22 17:49:05 by bbecker           #+#    #+#             */
/*   Updated: 2015/03/24 17:24:37 by bbecker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_printaddr_int(void *addr)
{
	long int	n;
	int 		ret;
	char		*tmp;

	n = (long int)addr;
	tmp = convert_dec_to_base(n, 16, 1);
	ret = ft_putstr_int("0x");
	ret += ft_putstr_int(tmp);
	free(tmp);
	return (ret);
}