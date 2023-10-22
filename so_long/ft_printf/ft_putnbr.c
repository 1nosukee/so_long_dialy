/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfaouzi <wfaouzi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 05:58:33 by wfaouzi           #+#    #+#             */
/*   Updated: 2022/11/14 16:00:45 by wfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long n)
{
	int	counter;

	counter = 0;
	if (n < 0)
	{
		counter += ft_putchar('-');
		n = -n;
	}
	if (n <= 9)
	{
		counter += ft_putchar(n + '0');
	}
	else
	{
		counter += ft_putnbr(n / 10);
		counter += ft_putnbr(n % 10);
	}
	return (counter);
}
