/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 18:46:17 by joslee            #+#    #+#             */
/*   Updated: 2020/03/02 19:01:03 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 인자로 받은 문자열을 속에 인자로 받은 문자가 감싸고 있는 문자열들을 뽑아서 새로 만든 빈 문자열에
** 넣고 그 문자열들을 같고 있는 배열의 포인터를 반환하는 함수.
** 예를 들어, 
** char *s = "*hello*fellow***students*";
** char **str = ft_strsplit(s, ’*’); 라고 한다면 '*'이 앞뒤로 있는 각각의 문자열을 뽑아서
** 새 문자열에 넣고 그 문자열을 모두 담고 있는 배열의 포인터를 반환한다.
** **str 은 ["hello", "fellow", "students"] 이렇게 값을 갖게 된다.
** 
** Allocates (with malloc(3)) and returns an array of “fresh” strings 
** (all ending with ’\0’, including the array itself) obtained 
** by spliting s using the character c as a delimiter.
** If the allocation fails the function returns NULL. 
** Example : ft_strsplit("*hello*fellow***students*", ’*’) 
** returns the array ["hello", "fellow", "students"].
*/

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		len;

	if (s == NULL)
		return (NULL);
	len = ft_strcounter_delim((char*)s, c);
	if (!(str = (char**)malloc(sizeof(char*) * len + 1)))
		return (NULL);
	str[len] = 0;
	i = 0;
	j = -1;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			len = ft_strlen_delim((char*)s, i, c);
			str[++j] = ft_strsub(s, i, len);
			i += len;
		}
	}
	return (str);
}
