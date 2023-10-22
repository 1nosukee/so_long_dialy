/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfaouzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:46:06 by wfaouzi           #+#    #+#             */
/*   Updated: 2022/11/14 16:46:07 by wfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(unsigned long x)
{
	char	*a;
	int		counter;

	a = "0123456789abcdef";
	counter = 0;
	if (x < 16)
		counter += ft_putchar(a[x]);
	else
	{
		counter += ft_pointer(x / 16);
		counter += ft_pointer(x % 16);
	}
	return (counter);
}
