/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahadzic                                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 00:54 by ahadzic              #+#    #+#             */
/*   Updated: 2022/01/04 00:54 by ahadzic             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*temp_src;
	unsigned char	*temp_dst;
	size_t			i;

	if ((dst == NULL) && (src == NULL))
		return (NULL);
	i = 1;
	temp_dst = dst;
	temp_src = (unsigned char *)src;
	if (temp_src < temp_dst)
	{
		while (i <= len)
		{
			temp_dst[len - i] = temp_src[len - i];
			i++;
		}
	}
	else
		ft_memcpy(temp_dst, temp_src, len);
	return (dst);
}
