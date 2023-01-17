/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprinf.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 14:28:40 by gfredes-          #+#    #+#             */
/*   Updated: 2023/01/17 19:59:02 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINF_H
# define LIBFTPRINF_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

# include "libft.h"??

int		ft_printf(char const *str, ...);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr()??;

#endif