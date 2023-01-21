/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 20:49:55 by gfredes-          #+#    #+#             */
/*   Updated: 2023/01/21 23:53:20 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_x(unsigned int nb, size_t *len)
{
	char	*hex_base;
	char	hex[42];
	int		i;

	hex_base = "0123456789abcdef";
	i = 0;
	if (nb == 0)
	{
		ft_print_c('0', len);
		return ;
	}
	while (nb != 0)
	{
		hex[i] = hex_base[nb % 16];
		nb /= 16;
		i++;
	}
	while (i > 0)
	{
		i--;
		ft_print_c(hex[i], len);
	}
}
