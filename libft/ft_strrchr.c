/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 13:29:51 by joslee            #+#    #+#             */
/*   Updated: 2020/02/26 16:14:55 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 문자열의 끝에서부터 지정 문자를 찾고 문자열속의 문자 위치를 반환하는 함수.
** 예를 들어,
** char *str = ft_strrchr("abcdefg", 'd')라고 한다면 "defg"가 반환된다.
** 만약 c에 '\0'이 들어온다면, 문자열의 끝("'\0'")를 반환한다.
** 찾고자하는 문자가 문자열 속에 없다면 NULL을 반환한다.
** 
** The ft_strrchr() function locates the last occurrence of c (converted to a
** char) in the string pointed to by s.  The terminating null character is
** considered to be part of the string; therefore if c is '\0', the functions
** locate the terminating '\0'. Returns a pointer to the located character,
** or NULL if the character does not appear in the string.
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == (char)c)
			return ((char*)s + len);
		len--;
	}
	return (NULL);
}
