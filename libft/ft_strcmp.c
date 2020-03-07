/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 17:03:52 by joslee            #+#    #+#             */
/*   Updated: 2020/02/20 20:16:25 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 두 문자열을 비교하여 같은지 다른지 알려주는 함수
** 예를 들어,
** int i = ft_strcmp("josh", "josh"); 라고 사용하면 0을 반환한다.
** 0이 반환되면 보는 것과 같이 두 문자열이 똑같다는 것을 가리킨다. 
** 그러나 만약 두 문자열이 다음과 같이 다르다면 "josh" "abc" 반환되는 값은
** 'j'와 'a'의 ascii code 값의 차를 반환한다. 'j'는 106, 'a'는 97, 따라서 값은
** 9가 반환된다. 그러므로 0이 아닌 값이 반환될때는 두 문자열이 다르다는것을
** 확인할 수 있다. 비교하는 두 값은 부호없는 문자 (unsigned char)를 사용한다.
** strcmp함수는 string.h헤더파일에 선언되어 있다. 
** 이 함수는 OS에 따라 동작방식이 다르다. windows에서는 문자열이 다를 때 1, -1, 0을
** 반환하지만, OS X, Linux에서는 ASCII Code값의 차이를 반환한다. 
** 
** The strcmp() and strncmp() functions lexicographically compare the null-
** terminated strings s1 and s2.
*/

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
