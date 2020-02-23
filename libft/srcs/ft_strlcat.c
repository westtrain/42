/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 18:50:27 by joslee            #+#    #+#             */
/*   Updated: 2020/02/22 13:55:49 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * 첫번째 문자열(dst) 뒤에 두번째 문자열(src)의 지정된 사이즈(대상 버퍼의 크기) 만큼 붙이고 결합할 두 문자열의 총 길이를 알려주는 함수
 * 단. 사이즈의 크기에 따라 결합할 두 문자열의 길이가 달라진다.
 * 사이즈가 첫번째 문자열(dst)보다 작으면 반환되는 값은 '두번째 문자열(src)의 길이' + '사이즈(dstsize)'가 된다.
 * 사이즈가 첫번째 문자열(dst)보다 크면 반환되는 값은 '첫번째 문자열(dst)의 길이' + '두번째 문자열(src)의 길이' 이다.
 * 예를 들어,
 * size_t i = ft_strlcat("Hello", "World", 0); 일 경우, i 는 5가 된다. dstsize(0) + src(5) = 5
 * 첫번째 문자열(dst)은 "Hello" 이다.
 * size_t i = ft_strlcat("Hello", "World", 5); 일 경우, i 는 10이 된다. dst(5) + src(5) = 10
 * 첫번째 문자열(dst)은 "Hello" 이다.
 * size_t i = ft_strlcat("Hello", "World", 7); 일 경우, i 는 10이 된다. dst(5) + src(5) = 10
 * 첫번째 문자열(dst)은 "HelloW" 이다.
 * size_t i = ft_strlcat("Hello", "World", 100); 일 경우, i 는 10이 된다. dst(5) + src(5) = 10
 * 첫번째 문자열(dst)은 "HelloWorld" 이다.
 * strlcat함수는 string.h헤더파일에 선언되어 있다. 
 * 
 * 
 * strlcat() appends string src to the end of dst. 
 * It will append at most dstsize - strlen(dst) - 1 characters.
 * It will then NUL-terminate, unless dstsize is 0 or the original dst string
 * was longer than dstsize (in practice this should not happen as it means that either
 * dstsize is incorrect or that dst is not a proper string).
 * If the src and dst strings overlap, the behavior is undefined.
 */

#include "libft.h"

size_t		ft_strlcat(char *restrict dst,
		const char *restrict src, size_t dstsize)
{
	size_t dstlen;
	size_t srclen;
	size_t i;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = dstlen;
	if (dstsize <= dstlen)
		return (dstsize + srclen);
	else
	{
		while (*src && i < dstsize - 1)
		{
			dst[i] = *src;
			src++;
			i++;
		}
		dst[i] = '\0';
		return (dstlen + srclen);
	}
}
