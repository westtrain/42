/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 19:48:54 by joslee            #+#    #+#             */
/*   Updated: 2020/02/26 15:47:00 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * 첫번째 문자열(dst)에 두번째 문자열(src)을 일정 길이(len) 만큼 복사하고 반환하는 함수
 * 예를 들어,
 * char *str = ft_strncpy("abc", "bcd", 3); 일 경우 "abc"는 "bcd"로 변경되어 반환된다.
 * char *str = ft_strncpy("abc", "bcd", 2); 일 경우 "abc"는 "bcc"로 변경되어 반환된다.
 * 단, 인자로 주어진 길이(len)가 두번째 문자열의 길이보다 길다면 첫번째 문자열에 두번째 문자열을 복사하고
 * 남은 공간에 '\0'을 채운다.
 * char *str = ft_strncpy("abcdef", "bcd", 6); 일 경우 
 * "abc"는 "bcd'\0''\0''\0'"로 변경되어 반환된다.
 * 
 * The ft_strncpy() function copies at most len characters from src into dst.
 * If src is less than len characters long, the remainder of dst is filled
 * with `\0' characters.
 */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t				i;

	i = 0;
	while (src[i] && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
