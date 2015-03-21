/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbecker <bbecker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/21 14:27:06 by bbecker           #+#    #+#             */
/*   Updated: 2015/03/21 17:19:33 by bbecker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	printvar(char c, int *ret, va_list ap)
{
	if (c)
	{
		if (c == 's')
			*ret = *ret + ft_putstr_int(va_arg(ap, char *));
	// 	else if (c == 'S')
	// 		*ret = *ret + ft__int(va_arg(ap, ));
	// 	else if (c == 'p')
	// 		*ret = *ret + ft__int(va_arg(ap, ));
	// 	else if (c == 'd')
	// 		*ret = *ret + ft__int(va_arg(ap, ));
	// 	else if (c == 'D')
	// 		*ret = *ret + ft__int(va_arg(ap, ));
	// 	else if (c == 'i')
	// 		*ret = *ret + ft__int(va_arg(ap, ));
	// 	else if (c == 'o')
	// 		*ret = *ret + ft__int(va_arg(ap, ));
	// 	else if (c == 'O')
	// 		*ret = *ret + ft__int(va_arg(ap, ));
	// 	else if (c == 'u')
	// 		*ret = *ret + ft__int(va_arg(ap, ));
	// 	else if (c == 'U')
	// 		*ret = *ret + ft__int(va_arg(ap, ));
	// 	else if (c == 'x')
	// 		*ret = *ret + ft__int(va_arg(ap, ));
	// 	else if (c == 'X')
	// 		*ret = *ret + ft__int(va_arg(ap, ));
	 	else if (c == 'c')
	 		*ret = *ret + ft_putchar_int(va_arg(ap, int));
	// 	else if (c == 'C')
	// 		*ret = *ret + ft__int(va_arg(ap, ));
	}
}

int		ft_printf(const char *format, ...)
{
	int		ret;
	int		i;
	va_list	ap;

	i = 0;
	ret = 0;
	if (!format)
		return (ret);
	va_start(ap, format);
	while (format[i])
	{
		if ((format[i] == '%'))
		{
			i++;
			if (format[i] == '%')
				ft_putchar(format[i]), ret++;
			else
				printvar(format[i], &ret, ap);
		}
		else
			ft_putchar(format[i]), ret++;
		i++;
	}
	va_end(ap);
	return (ret);	
}