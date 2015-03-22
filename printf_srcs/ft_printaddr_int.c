/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printaddr_int.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbecker <bbecker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/22 17:49:05 by bbecker           #+#    #+#             */
/*   Updated: 2015/03/22 18:36:19 by bbecker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_printaddr_int(void *addr)
{
	long int	n;
	int 			ret;

	n = (long int)addr;
	ret = ft_putllnbr_int(n);
	return (ret);
}