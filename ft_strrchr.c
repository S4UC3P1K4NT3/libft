/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtomasin <gtomasin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 16:43:46 by gtomasin          #+#    #+#             */
/*   Updated: 2026/10/22 11:22:38 by gtomasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include "ft_strlen.c"

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
