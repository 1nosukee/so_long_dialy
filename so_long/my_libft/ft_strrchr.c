/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfaouzi <wfaouzi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 22:34:30 by wfaouzi           #+#    #+#             */
/*   Updated: 2023/09/22 13:48:17 by wfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	n;
	char	*str;
	int		find;

	str = (char *)s;
	find = (char)c;
	n = ft_strlen(s);
	while (n > 0)
	{
		if (str[n] == find)
			return (str + n);
		n--;
	}
	if (str[n] == find)
		return (str);
	return (0);
}
