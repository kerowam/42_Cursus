/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 23:44:03 by gfredes-          #+#    #+#             */
/*   Updated: 2023/03/11 20:32:28 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

char		*get_next_line(int fd);
char		*make_line(char *stack);
char		*update_stack(char *stack);
char		*ft_strjoin(const char *s1, const char *s2);
char		*ft_strchr(char *s, int c);
size_t		ft_strlen(const char *s);
char		*ft_strdup(const char *s1);

#endif
