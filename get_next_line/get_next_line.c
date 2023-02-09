/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 23:43:39 by gfredes-          #+#    #+#             */
/*   Updated: 2023/02/09 23:22:40 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	make_line(char *stack)
{
	char	*line;
	int		i;

	if (stack || *stack)
	{
		i = 0;
		while (stack[i] != '\n' && stack[i] != '\0')
			i++;
		if (stack[i] == '\n')
			i++;
		line = malloc(sizeof(char) * (i + 1));
		if (!line)
			return (NULL);
		i = 0;
		while (stack[i] != '\n' && stack[i] != '\0')
		{
			line[i] = stack[i];
			i++;
		}
		if (stack[i] == '\n')
			line[i++] = '\n';
		line[i] = '\0';
		return (line);
	}
	return (NULL);
}

static char	update_stack(char *stack)
{
	char	*aux;
	char	*ptr;
	int		i;

	ptr = ft_strchr(stack, '\n');
	if (!ptr)
	{
		free(stack);
		return (NULL);
	}
	ptr++;
	aux = malloc(sizeof(char) * (ft_strlen(ptr) + 1));
	if (!aux)
		return (NULL);
	i = 0;
	while (*ptr != '\0')
	{
		aux[i] = *ptr;
		i++;
		ptr++;
	}
	aux[i] = '\0';
	free(stack);
	return (aux);
}

char	*get_next_line(int fd)
{
	static char	*stack;
	char		buffer[BUFFER_SIZE + 1];
	char		*line;
	size_t		readbytes;

	stack = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	readbytes = 1;
	while (!ft_strchr(stack, '\n') && readbytes > 0)
	{
		readbytes = read(fd, buffer, BUFFER_SIZE);
		if (readbytes < 0)
		{
			free(stack);
			return (NULL);
		}
		buffer[readbytes] = '\0';
		stack = ft_strjoin(stack, buffer);
	}
	line = make_line(stack);
	stack = update_stack(stack);
	return (line);
}
