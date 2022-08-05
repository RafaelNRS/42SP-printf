/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranascim <ranascim@42.student.42sp.org.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 08:02:00 by ranascim          #+#    #+#             */
/*   Updated: 2022/08/04 20:47:45 by ranascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
