/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 17:30:31 by joslee            #+#    #+#             */
/*   Updated: 2020/02/19 17:31:54 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
    int i = 0;
	unsigned char* ptr1;
    unsigned char* ptr2;

    ptr1 = (unsigned char*)dst;
    ptr2 = (unsigned char*)src;
    while (ptr2[i])
    {
        ptr1[i] =  ptr2[i];
        i++;        
    }
    ptr1[i] = '\0';
    return (dst);
}
