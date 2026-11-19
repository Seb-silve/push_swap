/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasilve <seb.silves@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 16:52:16 by sebsilve          #+#    #+#             */
/*   Updated: 2026/11/04 09:40:00 by sebasilve        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static size_t	ft_word_len(char const *s, char c)
{
	size_t	x;

	x = 0;
	while (s[x] && s[x] != c)
		x++;
	return (x);
}

static char	**ft_free(char **split, size_t x)
{
	while (x > 0)
		free(split[--x]);
	free(split);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	x;
	size_t	len;

	if (!s)
		return (NULL);
	split = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!split)
		return (NULL);
	x = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (!*s)
			break ;
		len = ft_word_len(s, c);
		split[x] = ft_substr(s, 0, len);
		if (!split[x])
			return (ft_free(split, x));
		s += len;
		x++;
	}
	split[x] = NULL;
	return (split);
}
