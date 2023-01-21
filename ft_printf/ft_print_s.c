/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 20:48:59 by gfredes-          #+#    #+#             */
/*   Updated: 2023/01/21 22:48:03 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_s(char	*str, size_t *len)
{
	if (!str)
		str = "(null)";
	while (*str != '\0')
	{
		ft_print_c(*str, len);
		str++;
	}
}
