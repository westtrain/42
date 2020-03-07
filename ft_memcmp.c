/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 17:02:07 by joslee            #+#    #+#             */
/*   Updated: 2020/03/06 17:42:10 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 인자로 받은 두개의 문자열의 메모리를 지정된 길이만큼 비교하는 함수.
** 예를 들어,
** int cmp = ft_memcmp("Hello", "Helld", 4); 라고 한다면, 두 문자는 지정된 길이인 4까지는
** 같기 때문에 같은 같은 문자열로 인식되고 0을 반환한다. 그러나 크기를 5로 주면, 두 문자열은 다르고
** 'o' - 'd'의 값(아스키코드 값의 차)을 반환하게 된다.
** 길이가 0이면 언제다 같은 문자열로 인식하고 0을 반환한다.
** Overflow을 막기 위해서 unsigned char로 변경해줘야 한다. 변경하지 않고 사용하면 다음과 같은
** overflow를 일으킬 수 있다. (char)200 < (char)0 (char)200은 -72로 overflow 된다.
**
** The memcmp() function compares byte string s1 against byte string s2.
** Both strings are assumed to be n bytes long.
** RETURN VALUES
** The memcmp() function returns zero if the two strings are identical, oth-
** erwise returns the difference between the first two differing bytes
** (treated as unsigned char values, so that `\200' is greater than `\0',
** for example).  Zero-length strings are always identical.  This behavior"
** is not required by C and portable code should only depend on the sign of"
** the returned value.
*/

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned char		*ptr1;
	unsigned char		*ptr2;

	i = 0;
	ptr1 = (unsigned char*)s1;
	ptr2 = (unsigned char*)s2;
	while (i < n)
	{
		if (ptr1[i] == ptr2[i])
			i++;
		else
			return (ptr1[i] - ptr2[i]);
	}
	return (0);
}
