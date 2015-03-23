/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbecker <bbecker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/23 16:55:28 by bbecker           #+#    #+#             */
/*   Updated: 2015/03/23 17:15:39 by bbecker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_puthexa_int(int n)
{
	int 		ret;
	char		*tmp;

	tmp = convert_dec_to_base(n, 16);
	ret = ft_putstr_int(tmp);
	free(tmp);
	return (ret);
}