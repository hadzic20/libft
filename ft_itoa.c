/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amillahadzic <42istanbul.com.tr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 01:32:48 by amillahad         #+#    #+#             */
/*   Updated: 2022/01/06 01:54:17 by amillahad        ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_number_length(long n)
{
	int	len;

	len = 0;
	if (n == 0)
		len = 1;
	else if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nb;
	char	*number;
	int		len;

	nb = n;
	len = ft_number_length(nb);
	number = (char *)malloc(sizeof(char) * (len + 1));
	if (!number)
		return (NULL);
	number[len--] = '\0';
	if (nb == 0)
		number[0] = '0';
	if (nb < 0)
	{
		number[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		number[len--] = 48 + (nb % 10);
		nb /= 10;
	}
	return (number);
}
