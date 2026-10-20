/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtomasin <gtomasin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:24:30 by gtomasin          #+#    #+#             */
/*   Updated: 2026/10/20 14:05:14 by gtomasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*bytes;
	size_t			compt;

	bytes = (unsigned char *) s;
	compt = 0;
	while (compt < n)
	{
		bytes[compt] = (unsigned char) c;
		compt++;
	}
	return (s);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	test[50] = "Welcome to onsenfoudureste";

// 	printf("resultat du test donne : %s\n", ft_memset(test, '#', 7));
// }
