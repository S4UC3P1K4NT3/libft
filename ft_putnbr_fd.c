/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_putnbr_fd.c                                    :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gtomasin <gtomasin@student.42lehavre.fr>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/24 16:13:35 by gtomasin         #+#    #+#              */
/*   Updated: 2026/10/24 17:09:37 by gtomasin        ###   ########.fr        */
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

static char	*fill(long long n)
{
	size_t	temp;
	char	*dest;

	temp = intlen(n);
	dest[temp] = 0;
	while (temp > 0)
	{
		dest[temp - 1] = (char)(n % 10 + '0');
		n /= 10;
		temp--;
	}
	return (dest);
}

void	ft_putnbr_fd(int n, int fd)
{
	write(fd, fill(n), intlen(n));
}

// int	main(void)
// {
// 	ft_putnbr_fd(-56489, 1);
// }
