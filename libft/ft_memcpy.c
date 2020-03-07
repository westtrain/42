/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 14:26:15 by joslee            #+#    #+#             */
/*   Updated: 2020/02/19 14:51:32 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 인자로 받은 길이(n)만큼 문자열(src)을 문자열(dst)에 복사하는 함수.
** 예를 들어,
** char *str1 = "Hello World";
** char *str2 = "Korea-USA"; 
** ft_memcpy(str2, str1, 5); 라고 한다면 지정된 길이만큼만 복사하고 문자열을 반환한다.(Hello-USA)
** 두 문자열 중 하나라도 NULL이 들어오면 0을 반환한다.
** 이 함수는 문자열을 복사하면서 중복 복사를 하게 된다. 
** 중복 복사라는 것은 다음과 같다.
** char *str = "Hello world";
** str + 2 = "llo world"
** ft_memcpy(str + 2, str, 10)이라고 한다면, 결과는 "HeHeHeHeHe�c�@@" 가 나온다.
** 뒤에 알 수 없는 문자가 붙는 이유는 메모리값을 넘어갔기 때문이다.
** 이유는 복사되는 곳의 위치의 주소값이 복사를 시작하는 위치의 주소값보다 높기 때문에 이미 복사한 값이
** 반복적으로 복사되는 것이다. 그러므로 중복 복사를 방지하려면 ft_memmove를 사용해야 한다.
** 
** copies the data from the beginning of (*src) into (*dst) 
** until (n) number of copies have been made
** does not care about memory overlaps
** will return NULL if (*dst) and (*src) are NULL else 
** will return (*dst) pointer at the location it first pointed to
*/

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char		*ptr_src;
	unsigned char		*ptr_dst;
	size_t				i;

	i = 0;
	if (src == NULL && dst == NULL)
		return (0);
	ptr_src = (unsigned char*)src;
	ptr_dst = (unsigned char*)dst;
	while (i < n)
	{
		ptr_dst[i] = ptr_src[i];
		i++;
	}
	return (dst);
}

