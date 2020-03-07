/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 13:18:20 by joslee            #+#    #+#             */
/*   Updated: 2020/03/06 17:35:16 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 인자로 받은 두 문자열을 인자로 받은 길이만큼 비교하는 함수.
** 예를 들어,
** int dif = ft_strequ("Hello", "Helld" 3); 라고 한다면 두 문자열이 길이 3만큼은
** 같기 때문에 1을 반환한다.
**
** Lexicographical comparison between s1 and s2 up to n char- acters or
** until a ’\0’ is reached. If the 2 strings are identical,
** the function returns 1, or 0 otherwise.
*/

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	if (s1 == NULL || s2 == NULL || n == 0)
		return (1);
	i = 0;
	while (s1[i] && s2[i] && i < n - 1 && s1[i] == s2[i])
		i++;
	if ((s1[i] - s2[i]) != 0)
		return (1);
	else
		return (0);
}
