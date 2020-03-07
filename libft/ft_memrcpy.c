/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 20:28:16 by joslee            #+#    #+#             */
/*   Updated: 2020/03/02 19:19:57 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 인자로 받은 두 문자열을 문자열의 끝에서 부터 복사하는 함수.
*/

#include "libft.h"

void	*ft_memrcpy(void *restrict dst, const void *restrict src, size_t index)
{
	unsigned char		*ptr1;
	unsigned char		*ptr2;

	if (dst == NULL && src == NULL)
		return (0);
	ptr1 = (unsigned char*)dst;
	ptr2 = (unsigned char*)src;
	while (index-- > 0)
		ptr1[index] = ptr2[index];
	return (dst);
}
