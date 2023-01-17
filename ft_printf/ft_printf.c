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

void ft_printer(char const *str, void args)
{
	str++;
	if (str == 'c')
		ft_putchar(*str);
	else if (str == 's')
		ft_putstr(*str);
	else if (str == 'p')

	else if (str == 'd')

	else if (str == 'i')
		ft_putnbr();???
	else if (str == 'u')

	else if (str == 'x')

	else if (str == 'X')

	else if (str == '%')
		ft_putchar('%');
}

int	ft_printf(char const *str, ...)
{
    
}