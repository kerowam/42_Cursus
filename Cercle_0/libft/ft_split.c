/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ :+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 13:21:00 by gfredes-          #+#    #+#             */
/*   Updated: 2022/12/24 14:53:17 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_split(const char *s, char c)
{
	unsigned int	i;
	unsigned int	count;

	i = 1;
	count = 0;
	if (*s == 0)
	{
		return (1);
	}
	if (s[0] != c)
		count++;
	while (s[i] != '\0')
	{
		if (s[i - 1] == c && s[i] != c)
			count++;
		i++;
	}
	return (count);
}

static char	**ft_memfree(char **str, unsigned int i)
{
	while (i > 0)
	{
		i--;
		free (str[i]);
	}
	free (str);
	return (0);
}

static char	**ft_putword(const char *s, char c, char **str)
{
	unsigned int	len;
	unsigned int	i;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c)
			{
				s++;
				len++;
			}
			str[i++] = ft_substr(s - len, 0, len);
			if (!str[i - 1] && i > 0)
				ft_memfree(str, i);
		}
		else
			s++;
	}
	str[i] = 0;
	return (str);
}

char	**ft_split(const char *s, char c)
{
	char				**str;

	str = malloc(sizeof (char *) * (ft_word_split(s, c) + 1));
	if (!str)
		return (0);
	return (ft_putword(s, c, str));
}
