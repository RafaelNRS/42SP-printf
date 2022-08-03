/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranascim <ranascim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 08:02:00 by ranascim          #+#    #+#             */
/*   Updated: 2022/07/12 08:49:24 by ranascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_print_p(unsigned long p)
{
	int	len;

	if (p == 0)
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	len = 2;
	ft_putstr_fd("0x", 1);
	len += ft_change_base(p, 16, HEXLOWER);
	return (len);
}
