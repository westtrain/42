/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 12:00:35 by joslee            #+#    #+#             */
/*   Updated: 2020/03/06 17:33:32 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 인자로 받은 길이만큼의 메모리에 지정된 문자를 넣는 함수.
** 예를 들어,
** char *s;
** ft_memset(s, 0, 10); 라고 한다면 길이가 10인 포인터 s안에 0으로 채우고 포인터의 시작점을
** 반환한다.
**
** The ft_memset() function writes len bytes of value c (converted to
** anunsigned char) to the string b.
** The ft_memset() function returns its first argument.
*/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char*)b;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
