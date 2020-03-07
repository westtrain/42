/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcounter_delim.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 13:19:31 by joslee            #+#    #+#             */
/*   Updated: 2020/03/02 13:26:57 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 인자로 받은 문자열속에 지정된 문자가 감싸고 있는 문자열의 갯수를 반환하는 함수.
** 예를 들어, 
** char *s = "*hello*fellow***students*";
** int cnt = ft_strcounter_delim(s, '*'); 라고 한다면 '*'이 감싸고 있는 문자열을 세고
** 3을 반환한다. 시작하는 부분과 끝나는 부분은 '*'이 없어도 문자열의 갯수를 반환한다.
** 
*/

#include "libft.h"

int		ft_strcounter_delim(char const *s, char delim)
{
	int cnt;
	int i;

	cnt = 0;
	i = 0;
	while (s[i])
	{
		if ((s[i] != delim && s[i + 1] == delim) ||
				(s[i] != delim && s[i + 1] == '\0'))
			cnt++;
		i++;
	}
	return (cnt);
}
