/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amillahadzic <42istanbul.com.tr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 02:17:16 by amillahad         #+#    #+#             */
/*   Updated: 2022/01/06 02:28:14 by amillahad        ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	a;
	size_t	i;
	char	*trimmed;

	if (!s1 || !set)
		return (NULL);
	a = 0;
	i = 0;
	while (s1 && *s1 && ft_strchr(set, *s1))
		s1++;
	a = ft_strlen(s1);
	while (s1 && *s1 && ft_strchr(set, s1[a - 1]))
		a--;
	trimmed = ft_substr(s1, 0, a);
	return (trimmed);
}
