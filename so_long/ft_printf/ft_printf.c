/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfaouzi <wfaouzi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 09:03:27 by wfaouzi           #+#    #+#             */
/*   Updated: 2023/09/24 02:25:21 by wfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_conan(va_list args, const char x)
{
	int	len;

	len = 0;
	if (x == '%')
		len += ft_putchar('%');
	if (x == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (x == 's')
		len += ft_putsss(va_arg(args, const char *));
	else if (x == 'p')
	{
		len += ft_putsss("0x");
		len += ft_pointer(va_arg(args, unsigned long));
	}
	else if (x == 'd' || x == 'i')
		len += ft_putnbr(va_arg(args, int));
	else if (x == 'u')
		len += ft_unsidecimal(va_arg(args, unsigned int));
	else if (x == 'x')
		len += ft_hexadicimal(va_arg(args, unsigned int), 1);
	else if (x == 'X')
		len += ft_hexadicimal(va_arg(args, unsigned int), 0);
	return (len);
}

int	ft_printf(const char *gura, ...)
{
	int		i;
	int		count;
	va_list	nice;

	i = 0;
	count = 0;
	va_start(nice, gura);
	while (gura[i])
	{
		if (gura[i] == '%')
		{
			i++;
			count += ft_conan(nice, gura[i]);
		}
		else
		{
			count += ft_putchar(gura[i]);
		}
		i++;
	}
	return (count);
}
