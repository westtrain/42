/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 14:17:43 by joslee            #+#    #+#             */
/*   Updated: 2020/03/06 17:16:02 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 문자열속에서 같은 문자열 찾는 함수
** 예를 들어,
** char *str = ft_strstr("abczzdef", "zz") "zz" 문자열을 "abcdzzdef"안에서 찾아서
** "zz"로 시작하는 문자열의 주소값을 반환한다. ("zzdef")
** 이 함수는 대소문자를 구분하기때문에 "ZZ"를 넣었다면 NULL을 반환한다.
** needle에 비어있는 문자열을 넣었을때는 haystack에 들어간 문자열을 그대로 반환한다.
** strstr함수는 string.h헤더파일에 선언되어 있다.
**
** The strstr() function locates the first occurrence of the null-terminated
** string needle in the null-terminated string haystack.
*/

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		len;

	len = ft_strlen(needle);
	if (*needle == '\0')
		return ((char*)haystack);
	while (*haystack)
	{
		if (*haystack == needle[0])
		{
			if (ft_strncmp(haystack, needle, len) == 0)
				return ((char*)haystack);
		}
		haystack++;
	}
	return (NULL);
}
