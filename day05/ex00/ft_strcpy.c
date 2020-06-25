/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseokane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 09:56:41 by nseokane          #+#    #+#             */
/*   Updated: 2020/06/25 09:56:48 by nseokane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src){
    int i = 0;
    
    while (src[i] != '\0'){
        dest[i] = src[i];
        i++;
    }

    return dest;
}
 
