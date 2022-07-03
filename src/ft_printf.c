/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranascim <ranascim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 07:23:58 by ranascim          #+#    #+#             */
/*   Updated: 2022/06/29 09:12:40 by ranascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_print_args(va_list args, char c, int len)
{
	if (c == 'c')
		ft_putchar_fd(va_arg(args, int), 1);
	len++;
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list args;
	int		len;
	int		i;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] != '%')
		{
			ft_putchar_fd(str[i++], 1);
		}
		else
		{
			i++;
			len = ft_print_args(args, str[i], len);
		}
	}
	return (len);
}