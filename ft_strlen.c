/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtomasin <gtomasin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:40:01 by gtomasin          #+#    #+#             */
/*   Updated: 2026/10/20 11:17:57 by gtomasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long ft_strlen(char *thestr)
{
    unsigned long compt;
    compt = 0;
    
    while(thestr[compt] != '\0')
    {
        compt++;
    }
    return compt;
}


// #include <string.h>
// #include <stdio.h>

// int main()
// {
//     printf("%lu\n",ft_strlen("test cedric"));
//     printf("%lu\n",strlen("test cedric"));
// }