/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 20:48:59 by gfredes-          #+#    #+#             */
/*   Updated: 2023/01/20 20:48:59 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libftprinf.h"

void	ft_print_s(char	*str, size_t *len)
{
	if(!str)
		str = "(null)";
	while (*str != '\0')
	{
		ft_print_c(*str, len);
		str++;
	}
}
