/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahadzic <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:54:19 by ahadzic           #+#    #+#             */
/*   Updated: 2022/01/03 15:54:39 by ahadzic          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	while (counter < n)
	{
		if (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
		{
			s1++;
			s2++;
		}
		else
			return ((unsigned char)*s1 - (unsigned char)*s2);
		counter++;
	}
	return (0);
}
