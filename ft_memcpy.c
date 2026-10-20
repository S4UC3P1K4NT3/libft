/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtomasin <gtomasin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 15:22:54 by gtomasin          #+#    #+#             */
/*   Updated: 2026/10/20 16:11:19 by gtomasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				compt;

	d = (unsigned char *) dest;
	s = (const unsigned char *) src;
	compt = 0;
	while (compt < n)
	{
		d[compt] = s[compt];
		compt++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	test[50] = "voici un test a copier";
// 	char	dest[50];
// 	char	test1[50] = "voici un test a copier";
// 	char	dest1[50];

// 	printf("test de renvoie de ma fonction sur 5 octets : %s\n", (char *) ft_memcpy(dest, test, 7));
// 	printf("test de renvoie de la fonction sur 5 octets : %s\n", (char *) memcpy(dest1, test1, 7));
// }
