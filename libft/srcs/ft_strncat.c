/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 19:58:16 by joslee            #+#    #+#             */
/*   Updated: 2020/02/19 20:02:28 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	size_t i = 0;
	size_t j = 0;
	unsigned char* ptr1;
	unsigned char* ptr2;

	ptr1 = (unsigned char*)s1;
	ptr2 = (unsigned char*)s2;
	while (ptr1[i])
		i++;
	while (j < n)
	{
		ptr1[i] = ptr2[j]
		i++;
		j++;		
	}
	ptr1[i] = '\0';
	return (s1);
}
