/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 22:55:18 by gfredes-          #+#    #+#             */
/*   Updated: 2023/02/01 22:55:30 by gfredes-         ###   ########.fr       */
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
