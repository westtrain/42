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

/*
** 두번째 문자열(src)을 첫번째 문자열(dst)에 지정된 크기(n)만큼만 복사해서 넣고 지정한 문자를 
** 찾으면 첫번째 문자열의 그 위치를 반환하는 함수.
** 예를 들어,
** char *str1 = "Hello World";
** char *str2 = "Korea-USA"
** ft_memccpy(str2, str1, 'o',5); 라고 한다면 dst에 src의 문자열을 하나씩 
** 복사하다가 복사한 dst에서 찾고자하는 문자 'o'을 발견하면 복사를 멈추고 문자를 찾은 위치 다음의
** 문자열("-USA")을 반환한다.(dst = "Hello-USA") 그러나 찾고자하는 문자인 'e' 대신에 'p'와 같은
** 찾을 수 없는 문자를 넣으면 두번쨰 문자열을 첫번째 문자열에 지정된 크기만큼 복사하고 NULL을 반환한다. 
** 단, 문자열은 겹치게 복사되면 안된다.
** 
** The memccpy() function copies bytes from string src
** to string dst.  If the character c (as converted to
** an unsigned char) occurs in the string src, the copy
** stops and a pointer to the byte after the copy of c
** in the string dst is returned.  Otherwise, n bytes
** are copied, and a NULL pointer is returned.
** The source and destination strings should not overlap,
** as the behavior is undefined.
*/

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
		ptr_dst[i] = ptr_src[i];
		if (ptr_dst[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
