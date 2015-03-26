/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putoctal_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbecker <bbecker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/24 16:32:46 by bbecker           #+#    #+#             */
/*   Updated: 2015/03/24 17:23:57 by bbecker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putoctal_int(long long int n)
{
	char	*tmp;
	int 	ret;

	tmp = convert_dec_to_base(n, 8, 1);
	ret = ft_putstr_int(tmp);
	free(tmp);
	return (ret);
}
