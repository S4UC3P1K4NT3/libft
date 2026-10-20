/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtomasin <gtomasin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 14:00:10 by gtomasin          #+#    #+#             */
/*   Updated: 2026/10/19 14:54:22 by gtomasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int ft_isalpha(unsigned char key)
{
    if ((key > 96 && key < 123) || (key > 64 && key < 91))
        return 1;
    return 0;
}

// #include <ctype.h>
// #include <stdio.h>

// int main()
// {
//     printf("%d\n",ft_isalpha('a'));
//     printf("%d\n",isalpha('@'));
//     return 0;
// }