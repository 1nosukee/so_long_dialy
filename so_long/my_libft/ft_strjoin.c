/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfaouzi <wfaouzi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:22:20 by wfaouzi           #+#    #+#             */
/*   Updated: 2023/09/22 13:48:17 by wfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	size_t	i;
	size_t	f;

	if (!s1)
		s1 = ft_calloc(1, 1);
	str = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	i = 0;
	f = 0;
	while (s1[i])
	{
		str[f++] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		str[f++] = s2[i];
		i++;
	}
	str[f] = 0;
	return (str);
}
