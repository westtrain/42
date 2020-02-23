/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 16:27:52 by joslee            #+#    #+#             */
/*   Updated: 2020/02/22 18:34:06 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * 문자열의 앞뒤로 공백(' ', '\n', '\t')이 있다면 지우고 반환하는 함수.
 * 예를 들어,
 * char *str = ft_strtrim("  He		llo Wo 	rld  "); 라고 한다면 'H' 앞에 붙어 있는 공백과 'd' 이후의
 * 공백은 제외시키고 'H'에서 "d"까지의 문자열만 가지고 있는 문자열 포인터를 반환한다. str = "He		llo Wo 	rld"
 * 만약 인자로 받은 문자열의 앞뒤에 공백이 없다면 즉시 인자로 받은 문자열을 반환시킨다.
 * 또한 malloc으로 빈 문자열을 만드는 것을 실패했다면 NULL을 반환한다.
 * 
 * Allocates (with malloc(3)) and returns a copy of the string given as argument 
 * without whitespaces at the beginning or at the end of the string. 
 * Will be considered as whitespaces the following characters ’ ’, ’\n’ and ’\t’. 
 * If s has no whites- paces at the beginning or at the end, 
 * the function returns a copy of s. If the allocation fails the function returns NULL.
 */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		end;
	int		start;
	int		i;

	i = 0;
	start = 0;
	end = ft_strlen(s) - 1;
	if (s[start] == ' ' || s[start] == '\n' || s[start] == '\t'
			|| s[end] == ' ' || s[end] == '\n' || s[end] == '\t')
	{
		while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
			start++;
		while (s[end] == ' ' || s[end] == '\n' || s[end] == '\t')
			end--;
	}
	else
		return ((char*)s);
	str = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	while (start <= end)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
