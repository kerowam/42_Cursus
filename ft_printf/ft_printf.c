/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 20:50:36 by gfredes-          #+#    #+#             */
/*   Updated: 2023/02/01 23:08:46 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_printer(char str, va_list arg, size_t *len)
{
	if (str == 'c')
		ft_print_c(va_arg(arg, int), len);
	else if (str == 's')
		ft_print_s(va_arg(arg, char *), len);
	else if (str == 'p')
		ft_print_p(va_arg(arg, unsigned long int), len);
	else if (str == 'd' || str == 'i')
		ft_print_d_i(va_arg(arg, int), len);
	else if (str == 'u')
		ft_print_u(va_arg(arg, unsigned int), len);
	else if (str == 'x')
		ft_print_x(va_arg(arg, unsigned int), len);
	else if (str == 'X')
		ft_print_upx(va_arg(arg, unsigned long int), len);
	else if (str == '%')
		ft_print_c('%', len);
}

int	ft_printf(char const *str, ...)
{
	va_list	arg;
	size_t	len;

	len = 0;
	va_start(arg, str);
	if (!str)
	{
		str = "(null)";
		va_end(arg);
	}
	if ((write (1, "", 0) == -1))
		return (-1);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ft_printer(*str, arg, &len);
		}
		else
			ft_print_c(*str, &len);
		str++;
	}
	va_end(arg);
	return (len);
}
