/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amillahadzic <42istanbul.com.tr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 01:16:44 by amillahad         #+#    #+#             */
/*   Updated: 2022/01/06 01:27:12 by amillahad        ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*strs;
	size_t	strlen;

	if (s == NULL)
		return (NULL);
	strlen = ft_strlen((char *)s);
	if (start > strlen)
		return (ft_strdup(""));
	if (strlen - start >= len)
		strs = (char *)malloc((len + 1) * sizeof(char));
	else
		strs = (char *)malloc((strlen - start + 1) * sizeof(char));
	if (strs == NULL)
		return (NULL);
	ft_strlcpy(strs, ((char *)s + start), (len + 1));
	return (strs);
}
