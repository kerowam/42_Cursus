/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 14:37:44 by gfredes-          #+#    #+#             */
/*   Updated: 2023/01/17 19:59:00 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprinf.h"

void ft_printer(char *str, va_list args, size_t *len)
{
	if (str == 'c')
		ft_print_c(va_arg(arg, char), len);
	else if (str == 's')
		ft_print_s(va_arg(arg, char *), len);
	else if (str == 'p')

	else if (str == 'd' || str == 'i')
		ft_print_d_i(va_arg(arg, int), len);
	else if (str == 'u')

	else if (str == 'x')

	else if (str == 'X')

	else if (str == '%')
		ft_print_c('%');
}

int	ft_printf(char const *str, ...)
{
	va_list	arg;
	size_t	len;

	len = 0;
	va_start(arg, str)
	if(!str)
	{
		str = "(null)";
		va_end(arg);
	}
	while(*str)
	{
		if(*str == '%')
		{
			str++;
			ft_printer((char *)str, arg, &len)
		}
		else
			ft_print_c(*str, &len);
		str++;
	}
	va_end(arg);
	return (len);
}