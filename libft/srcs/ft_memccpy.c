/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 14:51:52 by joslee            #+#    #+#             */
/*   Updated: 2020/02/19 16:38:09 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	size_t i;
	unsigned char* ptr_src;
	unsigned char* ptr_dst;

	i = 0;
	ptr_dst = (unsigned char*)dst;
	ptr_src = (unsigned char*)src;
	while (i < n)
	{
		if (ptr_src[i] == (unsigned char)c)
		{
			ptr_dst[i + 1] = '\0';
			return (dst);
		}
		ptr_dst[i] = ptr_src[i];
		i++;
	}
	ptr_dst[i] = '\0';
	return (NULL);
}
