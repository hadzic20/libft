/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahadzic <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 17:31:32 by ahadzic           #+#    #+#             */
/*   Updated: 2022/01/03 17:37:28 by ahadzic          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strrchr(const char *s, int c)
{
	char	*ch;
	int		check;

	check = 0;
	while (*s)
	{
		if (*s == (unsigned char)c)
		{
			ch = (char *)s;
			++check;
		}
		++s;
	}
	if (check > 0)
		return (ch);
	else if (c == '\0')
		return ((char *)s);
	return (0);
}
