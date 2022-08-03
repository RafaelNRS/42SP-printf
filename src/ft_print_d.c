/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranascim <ranascim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 08:05:02 by ranascim          #+#    #+#             */
/*   Updated: 2022/07/12 08:56:29 by ranascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_print_d(int d)
{
	int			len;
	long int	d_tmp;

	d_tmp = d;
	len = 0;
	if (d_tmp < 0)
	{
		ft_putchar_fd('-', 1);
		len += ft_change_base(d_tmp * -1, 10, DECIMAL) + 1;
	}
	else
		len += ft_change_base(d_tmp, 10, DECIMAL);
	return (len);
}
