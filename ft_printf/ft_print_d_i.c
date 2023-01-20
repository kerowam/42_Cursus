/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d_i.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 20:48:39 by gfredes-          #+#    #+#             */
/*   Updated: 2023/01/20 20:48:39 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libftprinf.h"

static void	ft_divorprint(int nb, size_t *len)
{
	if (nb >= 10)
	{
		nb = nb / 10;
		ft_divorprint(nb, len);
		ft_print_c(nb % 10 + '0', len);
	}
}	

void	ft_print_d_i(int nb, size_t *len)
{
	if (nb < 0)
	{
		ft_print_c('-', len);
		if (nb == -2147483648)
		{
			ft_print_c('2', len);
			nb = -147483648;
		}
		nb = nb * -1;
	}
	ft_divorprint(nb, len);
	ft_print_c(nb % 10 + '0', len);
}
