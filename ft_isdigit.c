/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtomasin <gtomasin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 14:54:53 by gtomasin          #+#    #+#             */
/*   Updated: 2026/10/19 14:58:24 by gtomasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(int key)
{
    if (key >= '0' && key <= '9')
        return 1;
    return 0;
}

// #include <ctype.h>
// #include <stdio.h>

// int main()
// {
//     printf("%d\n",ft_isdigit('1'));
//     printf("%d\n",isdigit('1'));
//     return 0;
// }