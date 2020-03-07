/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 13:14:30 by joslee            #+#    #+#             */
/*   Updated: 2020/03/06 17:32:35 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 인자로 받은 두 문자열을 비교하는 함수.
** 예를 들어,
** int dif = ft_strequ("Hello", "World"); 라고 한다면 두 문자열이 다르기 때문에
** 0을 반환한다. 만약 같은 문자열을 넣는다면, 1을 반환한다.
**
** Lexicographical comparison between s1 and s2.
** If the 2 strings are identical the function returns 1, or 0 otherwise.
*/

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	if (s1 == NULL || s2 == NULL)
		return (1);
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if ((*s1 - *s2) != 0)
		return (0);
	return (1);
}
