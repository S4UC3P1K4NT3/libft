/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_putnbr_fd.c                                    :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gtomasin <gtomasin@student.42lehavre.fr>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/24 16:13:35 by gtomasin         #+#    #+#              */
/*   Updated: 2026/10/24 17:15:25 by gtomasin        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	intlen(long long n)
{
	size_t	count;

	count = 0;
	if (n < 0)
		count++;
	while (n > 9 || n < -9)
	{
		n = n / 10;
		count++;
	}
	return (count + 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	size_t	temp;

	temp = intlen(n);
	while (temp > 0)
	{
		write(fd, (char)(n % 10 + '0'), 1);
		n /= 10;
		temp--;
	}
}

// int	main(void)
// {
// 	ft_putnbr_fd(-56489, 1);
// }
