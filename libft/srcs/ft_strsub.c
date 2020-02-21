/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 14:17:54 by joslee            #+#    #+#             */
/*   Updated: 2020/02/21 14:40:04 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * 빈 문자열을 만들고 인자로 받은 문자열의 지정된 시작점부터 지정된 길이까지 복사하는 함수.
 * 예를 들어,
 * char *str = ft_strsub("Hello World", 6, 5); 라고 한다면 malloc을 통해 길이가 5인
 * 빈 문자열을 만들고 인자로 받은 "Hello World" 문자열에서 6번째인 'W' 부터 복사해서 'd'까지 넣는다.
 * 그리고 새로 만들어진 문자열 "World"를 반환한다. 만약 malloc으로 빈 문자열을 만드는 것을 실패했다면
 * NULL을 반환한다.
 * 
 * Allocates (with malloc(3)) and returns a “fresh” substring 
 * from the string given as argument. 
 * The substring begins at indexstart and is of size len. 
 * If start and len aren’t refer- ing to a valid substring, 
 * the behavior is undefined. If the allocation fails, the function returns NULL.
 */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *str;
	size_t i;

	i = 0;
	str = (char*)malloc(sizeof(char) * (len + 1));
	if (!str || !s)
		return (NULL);
	while (i < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
