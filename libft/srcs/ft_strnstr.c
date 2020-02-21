/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 16:29:55 by joslee            #+#    #+#             */
/*   Updated: 2020/02/20 17:03:16 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * 문자열속에서 다른 문자열의 일정 길이까지만을 찾는 함수
 * 예를 들어,
 * char *str = ft_strstr("leejoaajoshlee", "josh", 2); 이렇게 사용할 경우,
 * "josh" 문자열 속에서 2개의 길이 즉 "jo"의 문자열을 "leejoaajoshlee"의 문자열에서 찾아서 그 문자와
 * 같은 문장이 시작되는 문자열을 반환하다. ("joaajoshlee")
 * len에 4의 값의 입력된 경우라면 반환된 문자열의 시작점이 다음처럼 바뀐다. ("joshlee")
 * 이처럼 len에 입력된 길이에 따라서 찾는 문자의 길이가 달라진다.
 * 만약 needle에 빈문자열이 들어가면 NULL을 반환한다. 
 * strstr함수는 string.h헤더파일에 선언되어 있다. 이 함수는 FreeBSD전용 API이므로 이식서에
 * 문제가 없을때만 사용해야 한다.
 */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (*needle == '\0')
		return ((char*)haystack);
	while (haystack[i])
	{
		if (haystack[i] == needle[j])
			j++;
		i++;
		if (j == len || needle[j] == '\0')
			return ((char*)haystack + (i - j));
	}
	return (NULL);
}
