/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfaouzi <wfaouzi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:31:40 by wfaouzi           #+#    #+#             */
/*   Updated: 2022/11/14 16:53:19 by wfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int	ft_printf(const char *gura, ...);
int	ft_putsss(const char *str);
int	ft_putchar(char c);
int	ft_putnbr(long n);
int	ft_pointer(unsigned long s);
int	ft_hexadicimal(unsigned long num, int lower);
int	ft_unsidecimal(unsigned int nb);

#endif
