/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 19:53:50 by joslee            #+#    #+#             */
/*   Updated: 2020/03/06 17:34:19 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 첫번째 문자열(s1)의 끝에 두번째 문자열(s2)을 이어붙이는 함수
** 예를 들어,
** char *s1 = "Hello";
** char *s2 = "World";
** char *res = ft_strcat(s1, s2); 라고 하면 결과 값은 "Hello World"가 나온다.
** 두 문자열을 붙이고 문자열의 끝에 반드시 마지막에 '\0'을 넣어줘야 한다.
**
** The strcat() and strncat() functions append a copy of the null-terminated
** string s2 to the end of the null-terminated string s1, then add
** a terminating `\0'.  The string s1 must have sufficient space to hold
** the result.
*/

#include "libft.h"

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	unsigned char *ptr1;
	unsigned char *ptr2;

	ptr1 = (unsigned char*)s1;
	ptr2 = (unsigned char*)s2;
	while (*ptr1)
		ptr1++;
	while (*ptr2)
	{
		*ptr1 = *ptr2;
		ptr1++;
		ptr2++;
	}
	*ptr1 = '\0';
	return (s1);
}
