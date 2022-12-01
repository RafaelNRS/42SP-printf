/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranascim <ranascim@42.student.42sp.org.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 07:26:14 by ranascim          #+#    #+#             */
/*   Updated: 2022/08/14 18:25:15 by ranascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

# define HEXLOWER "0123456789abcdef"
# define HEXUPPER "0123456789ABCDEF"
# define DECIMAL "0123456789"

int		ft_printf(const char *str, ...);
int		ft_print_args(va_list args, char c, int len);
int		ft_print_s(char *str);
int		ft_print_p(unsigned long p);
int		ft_print_d(int d);
int		ft_put_base(unsigned long n, unsigned long n_base, char *base);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *s);

#endif