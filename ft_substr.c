/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtomasin <gtomasin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 17:29:42 by gtomasin          #+#    #+#             */
/*   Updated: 2026/10/23 18:22:10 by gtomasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*r;
	size_t	i;

	i = 0;
	if (start > ft_strlen(s))
		return (NULL);
	if ((ft_strlen(s) - start) < len)
		len = ft_strlen(s) - start;
	r = malloc((len + 1) * sizeof(char));
	if (!r)
		return (NULL);
	while (i < len)
	{
		r[i] = s[start];
		i++;
		start++;
	}
	r[i] = 0;
	return (r);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("ma ft  :%s\n", ft_substr("bonjour hoho je test cedric", 8, 4));
// 	printf("ma ft  : %s\n", ft_substr("Tres peux etre long test", 6, 6));
// 	printf("ma ft  : %s\n", ft_substr("Tres   \t long idfivdsiuvsd", 6, 700));
// 	printf("ma ft  : %s\n", ft_substr("Hitesthi", 0, 0));
// 	printf("ma ft  : %s\n", ft_substr("\\A\\U\\ w \t\n  AbOJSIOJSIOJ", 7, 4));
// 	return (0);
// }
