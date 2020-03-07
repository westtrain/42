/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 19:58:16 by joslee            #+#    #+#             */
/*   Updated: 2020/03/06 17:30:18 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 첫번째 문자열의 끝에 일정 길이 만큼 두번째 문자열을 이어붙인 후 반환하는 함수.
** 예를 들어,
** char *str = ft_strncat("abcd", "ABC", 3);은 "ABCd'\0'"를 반환한다.
**
** The ft_strncat() function appends a copy of the null-terminated string s2
** to the end of the null-terminated string s1. The ft_strncat() function
** appends not more than n characters from s2, and then adds a terminating
** '\0'.
*/

#include "libft.h"

char	*ft_strncat(char *restrict s1, char const *restrict s2, size_t n)
{
	size_t				i;
	size_t				j;
	unsigned char		*ptr1;
	unsigned char		*ptr2;

	i = 0;
	j = 0;
	ptr1 = (unsigned char*)s1;
	ptr2 = (unsigned char*)s2;
	while (ptr1[i])
		i++;
	while (ptr2[j] && j < n)
	{
		ptr1[i] = ptr2[j];
		i++;
		j++;
	}
	ptr1[i] = '\0';
	return (s1);
}
