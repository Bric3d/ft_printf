/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbecker <bbecker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/21 15:04:28 by bbecker           #+#    #+#             */
/*   Updated: 2015/03/21 17:55:08 by bbecker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	ft_putnbr(printf("\n%s%%%c\n", "23", 48));
	ft_putnbr(ft_printf("\n%s%%%c\n", "23", 48));
	ft_putnbr(ft_printf("\n%s\n", "abc"));
	ft_putnbr(printf("\n%s\n", "abc"));
	ft_putnbr(ft_printf("\n111%s333\n", "222"));
	ft_putnbr(printf("\n111%s333\n", "222"));
	ft_putnbr(ft_printf("\n%s333\n", "222"));
	ft_putnbr(printf("\n%s333\n", "222"));
	ft_putnbr(ft_printf("\n111%s\n", "222"));
	ft_putnbr(printf("\n111%s\n", "222"));
	ft_putnbr(ft_printf("\n{%s}\n", NULL));
	ft_putnbr(printf("\n{%s}\n", NULL));
	ft_putnbr(ft_printf("\n{%s}\n", ""));
	ft_putnbr(printf("\n{%s}\n", ""));
	ft_putnbr(ft_printf("%"));
	ft_putnbr(printf("%"));
	ft_putnbr(ft_printf(NULL));
	ft_putnbr(printf(NULL));
	return (0);
}