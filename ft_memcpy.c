/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahadzic                                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 00:44 by ahadzic              #+#    #+#             */
/*   Updated: 2022/01/04 00:44 by ahadzic             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*temp_src;
	unsigned char	*temp_dst;
	size_t			i;

	if (!dst && !src)
		return (NULL);
	i = -1;
	temp_dst = dst;
	temp_src = (unsigned char *)src;
	while (++i < n)
		temp_dst[i] = temp_src[i];
	dst = temp_dst;
	return (dst);
}
