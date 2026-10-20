/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtomasin <gtomasin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:24:30 by gtomasin          #+#    #+#             */
/*   Updated: 2026/10/20 13:53:12 by gtomasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_memset(char *str, char key, size_t size)
{
	size_t	compt;

	compt = 0;
	while (compt < size)
	{
		str[compt] = key;
		compt++;
	}
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	test[50] = "Welcome to onsenfoudureste";

// 	printf("resultat du test donne : %s\n", ft_memset(test, '#', 7));
// }
