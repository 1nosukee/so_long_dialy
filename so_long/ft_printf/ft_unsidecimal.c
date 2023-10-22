/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsidecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfaouzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:45:55 by wfaouzi           #+#    #+#             */
/*   Updated: 2022/11/14 16:45:57 by wfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsidecimal(unsigned int n)
{
	char	a;
	int		counter;

	counter = 0;
	if (n > 9)
	{
		counter += ft_unsidecimal(n / 10);
		counter += ft_unsidecimal(n % 10);
	}
	else
	{
		a = '0' + (n % 10);
		counter += ft_putchar(a);
	}
	return (counter);
}
