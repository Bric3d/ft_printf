/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbecker <bbecker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/21 17:16:17 by bbecker           #+#    #+#             */
/*   Updated: 2015/03/21 17:17:51 by bbecker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putchar_int(int c)
{
	unsigned char	d;

	d = (unsigned char)c;
	write(1, &d, 1);
	return (1);
}