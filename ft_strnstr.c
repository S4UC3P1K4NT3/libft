/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtomasin <gtomasin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 15:34:34 by gtomasin          #+#    #+#             */
/*   Updated: 2026/10/26 10:31:33 by gtomasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	val;

	if (!big && !len)
		return (NULL);
	if (!ft_strlen(little))
		return ((char *) big);
	while (len-- && *big)
	{
		val = 0;
		while (big[val] == little[val] && val < len)
		{
			val++;
			if (val >= ft_strlen(little))
				return ((char *) big);
		}
		big++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <bsd/string.h>

// int    main(void)
// {
//     char    *test1 = "Tres long test";
//     char    *test2 = "Treslongtest";
//     char    *test3 = "Hi\0Low";
//     char    *test4 = "Hello World";

//     printf("ma ft   : %s\n", ft_strnstr(test1, "e", 20));
//     printf("vrai ft : %s\n", strnstr(test1, "e", 20));
//     printf("ma ft   : %s\n", ft_strnstr(test2, "gt", 5));
//     printf("vrai ft : %s\n", strnstr(test2, "gt", 5));
//     printf("ma ft   : %s\n", ft_strnstr(test3, "Lo", 10));
//     printf("vrai ft : %s\n", strnstr(test3, "Lo", 10));
//     printf("ma ft   : %s\n", ft_strnstr(test4, " ", 7));
//     printf("vrai ft : %s\n", strnstr(test4, " ", 7));
//     return (0);
// }
