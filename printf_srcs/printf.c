/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbecker <bbecker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/21 14:27:06 by bbecker           #+#    #+#             */
/*   Updated: 2015/03/26 16:50:24 by bbecker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	printvar(char c, int *ret, va_list ap)
{
	if (c)
	{
		if (c == 's')
			*ret = *ret + ft_putstr_int(va_arg(ap, char *));
	 	else if (c == 'S')
	 		*ret = *ret + ft_putlstr_int(va_arg(ap, wchar_t *));
	 	else if (c == 'p')
	 		*ret = *ret + ft_printaddr_int(va_arg(ap, void *));
		else if (c == 'd')
			*ret = *ret + ft_putnbr_int(va_arg(ap, int));
		else if (c == 'D')
			*ret = *ret + ft_putllnbr_int(va_arg(ap, unsigned long int));
		else if (c == 'i')
			*ret = *ret + ft_putnbr_int(va_arg(ap, int));
		else if (c == 'o')
			*ret = *ret + ft_putoctal_int((unsigned int)va_arg(ap, int));
		else if (c == 'O')
			*ret = *ret + ft_putoctal_int((unsigned long int)va_arg(ap, unsigned long int));
		else if (c == 'u')
			*ret = *ret + ft_putunsgnllint_int((unsigned int)va_arg(ap, int));
		else if (c == 'U')	
			*ret = *ret +  ft_putunsgnllint_int((unsigned long int)va_arg(ap, unsigned long));
		else if (c == 'x')
			*ret = *ret + ft_puthexa_int((unsigned int)va_arg(ap, int), 1);
		else if (c == 'X')
			*ret = *ret + ft_puthexa_int((unsigned int)va_arg(ap, int), 2);
	 	else if (c == 'c')
	 		*ret = *ret + ft_putchar_int(va_arg(ap, int));
		else if (c == 'C')
			*ret = *ret + ft_putlchar_int(va_arg(ap, wchar_t));
	 	else if (c != ' ')
			*ret = *ret + 1, ft_putchar(c);
	}
}

static void	incr_i(int *i, const char *format)
{
	*i = *i + 1;
	while (format[*i] == ' ')
		*i = *i + 1;
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
			incr_i(&i, format);
			if (format[i])
				printvar(format[i], &ret, ap);
		}
		else if (format[i])
			ft_putchar(format[i]), ret++;
		if (format[i])
			i++;
	}
	va_end(ap);
	return (ret);
}