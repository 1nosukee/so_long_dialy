/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadicimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfaouzi <wfaouzi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 20:04:51 by wfaouzi           #+#    #+#             */
/*   Updated: 2023/09/23 12:25:00 by wfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexadicimal(unsigned long num, int lower)
{
	int		f;
	char	*s;

	f = 0;
	if (lower)
		s = "0123456789abcdef";
	else
		s = "0123456789ABCDEF";
	if (num < 16)
		f += ft_putchar(s[num]);
	else
	{
		f += ft_hexadicimal(num / 16, lower);
		f += ft_hexadicimal(num % 16, lower);
	}
	return (f);
}
