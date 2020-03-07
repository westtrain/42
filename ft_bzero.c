/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 18:52:18 by joslee            #+#    #+#             */
/*   Updated: 2020/02/19 18:58:29 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 인자로 받은 문자열을 지정된 크기만큼 0으로 초기화하는 함수.
** 예를 들어, 
** char *s; 
** ft_bzero(s, 10); 라고 한다면 s의 포인터 변수안에 10만큼 0으로 채운다. 
** 
** The bzero() function writes n zeroed bytes to the string s.  If n is
** zero, bzero() does nothing.
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t				i;
	unsigned char		*ptr;

	i = 0;
	if (n != 0)
	{
		ptr = (unsigned char*)s;
		while (i < n)
		{
			ptr[i] = 0;
			i++;
		}
	}
}
