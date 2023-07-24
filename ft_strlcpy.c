/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahadzic <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:46:00 by ahadzic           #+#    #+#             */
/*   Updated: 2022/01/03 15:48:16 by ahadzic          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	int				counter;

	i = 0;
	counter = 0;
	if (size != 0)
	{
		while (*src != '\0' && i < (size - 1) && size != 0)
		{
			*dest = *src;
			i++;
			dest++;
			src++;
			counter++;
		}
		*dest = '\0';
	}
	while (*src != '\0')
	{
		src++;
		counter++;
	}
	return (counter);
}
