/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:55:58 by gfredes-          #+#    #+#             */
/*   Updated: 2023/01/17 19:56:24 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprinf.h"


static void	ft_divorprint(int nb)
{
	if (nb >= 10)
	{
		nb = nb / 10;
		ft_divorprint(nb);
		ft_putchar(nb % 10 + '0');
	}
}	

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putchar('2');
			nb = -147483648;
		}
		nb = nb * -1;
	}
	ft_divorprint(nb);
	ft_putchar(nb % 10 + '0');
}
