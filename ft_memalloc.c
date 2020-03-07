/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 22:19:13 by joslee            #+#    #+#             */
/*   Updated: 2020/03/06 17:41:51 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 인자로 받은 크기만큼의 메모리를 할당하고 0으로 초기화하는 함수.
** 예를 들어,
** char *newmem = ft_memalloc(5); 라고 한다면 크기가 5인 newmem의 포인터 변수안에
** 0으로 채운다. 만약 메모리 할당에 실패했다면, NULL을 반환한다.
**
** Allocates (with malloc(3)) and returns a “fresh” memory area.
** The memory allocated is initialized to 0. If the allocation fails,
** the function returns NULL.
*/

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*ptr;

	ptr = (void*)malloc(size);
	if (!ptr)
	{
		ptr = NULL;
		return (NULL);
	}
	ft_bzero(ptr, size);
	return (ptr);
}
