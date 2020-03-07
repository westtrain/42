/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 15:19:45 by joslee            #+#    #+#             */
/*   Updated: 2020/03/02 19:21:41 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 인자로 받은 길이(n)만큼 문자열(src)을 문자열(dst)에 복사하는 함수.
** 예를 들어,
** char *str1 = "Hello World";
** char *str2 = "Korea-USA"; 
** ft_memmove(str2, str1, 5); 라고 한다면 지정된 길이만큼만 복사하고 문자열을 반환한다.(Hello-USA)
** 두 문자열 중 하나라도 NULL이 들어오면 0을 반환한다.
** 이 함수는 문자열을 복사하면서 중복 복사를 방지한다. 
** 중복 복사라는 것은 다음과 같다.
** char *str = "Hello world";
** char *dst;
** dst = str + 2 = "llo world"
** ft_memcpy(dst, str, 10)이라고 한다면, 결과는 "HeHeHeHeHe�c�@@" 가 나온다.
** 뒤에 알 수 없는 문자가 붙는 이유는 메모리값을 넘어갔기 때문이다.
** 이유는 복사되는 곳의 위치의 주소값이 복사를 시작하는 위치의 주소값보다 높기 때문에 이미 복사한 값이
** 반복적으로 복사되는 것이다. 그러므로 중복 복사를 방지하려면 ft_memmove를 사용해야 한다.
** ft_memmove(dst, str, 3); 이라고 한다면, 결과는 "olo World"가 나온다.
** 이유는 두 문자열의 뒤에서부터 문자를 이동시키기 때문이다. 
** 			1 2 3 4 5  6  7 8 9 10 11
** str ->	H e l l o ' ' W o r l d 이동 후 l l o l o ' ' W o r l d
** dst ->     	l l o ' ' W o r l d 이동 후 o l o ' ' W o r l d
** 
** copies data from (*src) into (*dst) accordingly to account for data overlap 
** f (src) starts first in memory data will be copied starting 
** from the end of (len) else data will be copied from the beginnning 
** until it reaches (len)
** will return (*dst) pointer at the location it first pointed to
*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst >= src)
		ft_memrcpy(dst, src, len);
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
