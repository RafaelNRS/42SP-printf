/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranascim <ranascim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 07:26:14 by ranascim          #+#    #+#             */
/*   Updated: 2022/07/12 08:56:07 by ranascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft.h"

# define HEXLOWER "0123456789abcdef"
# define HEXUPPER "0123456789ABCDEF"
# define DECIMAL "0123456789"

int	ft_printf(const char *str, ...);
int	ft_print_args(va_list args, char c, int len);
int	ft_print_s(char *str);
int	ft_print_p(unsigned long p);
int	ft_print_d(int d);
int	ft_change_base(unsigned long n, unsigned long n_base, char *base);

#endif