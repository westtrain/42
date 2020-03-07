/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 16:44:56 by joslee            #+#    #+#             */
/*   Updated: 2020/03/06 17:18:31 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 인자로 받은 크기만큼의 문자열을 검색해서 찾고자하는 문자를 찾으면 그 위치 바로 다음을
** 반환하는 함수.
** 예를 들어,
** char *str = "Hello World";
** ft_memchr(str, 'W', 8);라고 한다면, 문자열의 8번째까지 검색을 하다가 'W'을 찾으면
** 멈추고 그 위치를 반환한다. 만약 찾고자하는 문자가 없다면 NULL을 반환한다.
**
** The memchr() function locates the first occurrence of
** c (converted to an unsigned char) in string s.
** RETURN VALUES
** The memchr() function returns a pointer to the byte
** located, or NULL if no such byte exists within n
** bytes.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*ptr;
	size_t				i;

	i = 0;
	ptr = (unsigned char*)s;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return (ptr + i);
		i++;
	}
	return (NULL);
}
