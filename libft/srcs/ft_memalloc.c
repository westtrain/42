/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 22:19:13 by joslee            #+#    #+#             */
/*   Updated: 2020/02/20 12:46:07 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void* ptr;

	ptr = (void*)malloc(sizeof(void) * (size + 1));
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, size);
	return (ptr);
}
