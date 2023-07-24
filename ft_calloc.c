/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amillahadzic <42istanbul.com.tr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 13:26:22 by amillahad         #+#    #+#             */
/*   Updated: 2022/01/06 13:32:27 by amillahad        ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*ptr;

	i = 0;
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

/*#include <string.h>
int main () {
	void * p = ft_calloc(2, 2);
	char e[] = {0, 0, 0, 0};
	if(!memcmp(p, e, 4))
		write(1, "Çalışıyor!", 15);
	else
		write(1, ":(", 2);
}*/