/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 12:00:35 by joslee            #+#    #+#             */
/*   Updated: 2020/02/19 13:16:31 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t i;
	unsigned char *ptr;

	i = 0;
	ptr = (unsigned char*)b;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	ptr[i] = '\0';
	return (b);
}
