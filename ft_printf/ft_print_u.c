/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 22:44:27 by gfredes-          #+#    #+#             */
/*   Updated: 2023/02/01 22:57:55 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_u(unsigned int nb, size_t *len)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		n = -n;
	}
	if (n >= 10)
	{
		ft_print_u(n / 10, len);
		ft_print_c(n % 10 + '0', len);
	}
	else
		ft_print_c(n % 10 + '0', len);
}
