/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 22:01:21 by gfredes-          #+#    #+#             */
/*   Updated: 2023/01/20 22:01:21 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libftprinf.h"

void  ft_print_p(unsigned int nb, size_t *len)
{
  ft_print_c('0', len);
  ft_print_c('x', len);
  ft_print_x(nb, len);
}