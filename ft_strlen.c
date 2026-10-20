/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtomasin <gtomasin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:40:01 by gtomasin          #+#    #+#             */
/*   Updated: 2026/10/20 13:52:14 by gtomasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	compt;

	compt = 0;
	while (s[compt] != '\0')
	{
		compt++;
	}
	return (compt);
}

// #include <string.h>
// #include <stdio.h>

// int main()
// {
//     printf("%lu\n",ft_strlen("test cedric"));
//     printf("%lu\n",strlen("test cedric"));
// }
