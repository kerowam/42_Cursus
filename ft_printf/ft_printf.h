/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 20:50:54 by gfredes-          #+#    #+#             */
/*   Updated: 2023/02/01 22:57:25 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

/**
 * @brief Writes output to the stdout stream, under control of the argument str.
 *
 * @param str: A string that controls the format of the output, as described.
 * The formatting string determines what additional arguments you need
 * to provide.
 * @param ...: The arguments to be printed.
 * @return int: The number of characters written, excluding the terminating NUL, 
 * or a negative number if an error occurred.
 */
int		ft_printf(char const *str, ...);
void	ft_print_c(char c, size_t *len);
void	ft_print_s(char *str, size_t *len);
void	ft_print_d_i(int nb, size_t *len);
void	ft_print_u(unsigned int nb, size_t *len);
void	ft_print_x(unsigned int nb, size_t *len);
void	ft_print_upx(unsigned int nb, size_t *len);
void	ft_print_p(unsigned long int nb, size_t *len);

#endif