/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amillahadzic <42istanbul.com.tr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 14:09:35 by amillahad         #+#    #+#             */
/*   Updated: 2022/01/06 14:39:02 by amillahad        ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	countchar(const char *s, char c, int delimit)
{
	size_t	i;

	i = 0;
	if (delimit)
	{
		while (s[i] && s[i] != c)
			i++;
	}
	else
	{
		while (s[i] && s[i] == c)
			i++;
	}
	return (i);
}

static size_t	countword(const char *str, char c)
{
	size_t	i;
	size_t	word;

	i = 0;
	word = 0;
	while (str[i] && str[i] == c)
		i++;
	while (str[i])
	{
		while (str[i] && str[i] != c)
			i++;
		word++;
		while (str[i] && str[i] == c)
			i++;
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	word;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	word = countword(s, c);
	array = malloc((word + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	while (i < word)
	{
		s += countchar(s, c, 0);
		array[i] = ft_substr(s, 0, countchar(s, c, 1));
		if (!array[i])
			return (NULL);
		s += countchar(s, c, 1) + countchar(s, c, 0);
		i++;
	}
	array[i] = NULL;
	return (array);
}
