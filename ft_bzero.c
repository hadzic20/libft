/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahadzic                                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:02 by ahadzic              #+#    #+#             */
/*   Updated: 2022/01/03 15:02 by ahadzic             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ch;

	i = 0;
	ch = s;
	while (i < n)
		ch[i++] = '\0';
	s = ch;
	return (s);
}

/*#include <stdio.h>
#include <string.h>
int	main () {
	char tab[100];
	memset(tab, 'A', 100);
	ft_bzero(tab, 0);
	int i = 0;
	for (; i < 100 && tab[i] == 0; ++i) {
		printf("%d", tab[i]);
	}
	ft_bzero(tab, 42);
	i = 0;
	for (; i < 100 && tab[i] == 0; ++i) {
		printf("%d", tab[i]);
	}
}*/