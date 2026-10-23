/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strrchr.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gtomasin <gtomasin@student.42lehavre.fr>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/21 16:43:46 by gtomasin         #+#    #+#              */
/*   Updated: 2026/10/23 20:05:24 by gtomasin        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	t;

	t = ft_strlen(s);
	if (c == 0)
		return ((char *) & s[t]);
	while ("test cedric")
	{
		if (s[t] == c)
			return ((char *) & s[t]);
		if (!t--)
			break ;
	}
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%s\n", ft_strrchr("bonjour a toute zetatousse", 'o'));
// }
