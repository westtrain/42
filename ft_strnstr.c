/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 16:29:55 by joslee            #+#    #+#             */
/*   Updated: 2020/03/06 18:46:22 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 문자열속에서 다른 문자열의 일정 길이까지만을 찾는 함수
** 예를 들어,
** char *str = ft_strstr("leejoaajoshlee", "josh", 2); 이렇게 사용할 경우,
** "josh" 문자열 속에서 2개의 길이 즉 "jo"의 문자열을 "leejoaajoshlee"의 문자열에서 찾아서 그 문자와
** 같은 문장이 시작되는 문자열을 반환하다. ("joaajoshlee")
** len에 4의 값의 입력된 경우라면 반환된 문자열의 시작점이 다음처럼 바뀐다. ("joshlee")
** 이처럼 len에 입력된 길이에 따라서 찾는 문자의 길이가 달라진다.
** 만약 needle에 빈문자열이 들어가면 NULL을 반환한다.
** strstr함수는 string.h헤더파일에 선언되어 있다. 이 함수는 FreeBSD전용 API이므로 이식서에
** 문제가 없을때만 사용해야 한다.
**
** The strnstr() function locates the first occurrence of the null-termi-
** nated string needle in the string haystack, where not more than len char-
** acters are searched.  Characters that appear after a `\0' character are
** not searched.  Since the strnstr() function is a FreeBSD specific API, it
** should only be used when portability is not a concern.
*/

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t pos;
	size_t temp;
	size_t i;

	pos = 0;
	if (*needle == '\0')
		return ((char*)haystack);
	while (haystack[pos] && pos < len)
	{
		temp = pos;
		i = 0;
		while (needle[i] && haystack[temp] && temp < len
				&& needle[i] == haystack[temp])
		{
			temp++;
			i++;
		}
		if (needle[i] == '\0')
			return ((char*)haystack + (temp - i));
		pos++;
	}
	return (NULL);
}
