/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtomasin <gtomasin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:24:30 by gtomasin          #+#    #+#             */
/*   Updated: 2026/10/20 14:32:32 by gtomasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*tab;
	size_t			compt;

	tab = (unsigned char *) s;
	compt = 0;
	while (compt < n)
	{
		tab[compt] = (unsigned char) c;
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
