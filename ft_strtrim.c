/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 16:27:52 by joslee            #+#    #+#             */
/*   Updated: 2020/03/06 17:44:25 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 문자열의 앞뒤로 공백(' ', '\n', '\t')이 있다면 지우고 반환하는 함수.
** 예를 들어,
** char *str = ft_strtrim("  He		llo Wo 	rld  "); 라고 한다면
** 'H' 앞에 붙어 있는 공백과 'd' 이후의 공백은 제외시키고 'H'에서 "d"까지의 문자열만
** 가지고 있는 문자열 포인터를 반환한다. str = "He		llo Wo 	rld"
** 만약 인자로 받은 문자열의 앞뒤에 공백이 없다면 즉시 인자로 받은 문자열을 반환시킨다.
** 또한 malloc으로 빈 문자열을 만드는 것을 실패했다면 NULL을 반환한다.
**
** Allocates (with malloc(3)) and returns a copy of the string given as argument
** without whitespaces at the beginning or at the end of the string.
** Will be considered as whitespaces
** the following characters ’ ’, ’\n’ and ’\t’.
** If s has no whites- paces at the beginning or at the end,
** the function returns a copy of s.
** If the allocation fails the function returns NULL.
*/

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*res;
	int		end;
	int		start;

	if (!s)
		return (NULL);
	start = 0;
	end = ft_strlen(s) - 1;
	while (s[start] == ' ' || s[start] == '\t' || s[start] == '\n')
		start++;
	if (s[start] == '\0')
		return (ft_strdup(""));
	while ((s[end] == ' ' || s[end] == '\t' || s[end] == '\n') && end > 0)
		end--;
	res = ft_memalloc(end - start + 2);
	if (!res)
		return (NULL);
	ft_strncpy(res, &s[start], end - start + 1);
	return (res);
}
