/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_change_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranascim <ranascim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 08:23:28 by ranascim          #+#    #+#             */
/*   Updated: 2022/07/12 08:56:37 by ranascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_change_base(unsigned long n, unsigned long n_base, char *base)
{
	int	len;

	len = 1;
	if (n >= n_base)
	{
		len = len + ft_change_base(n / n_base, n_base, base);
	}
	ft_putchar_fd(base[n % n_base], 1);
	return (len);
}
