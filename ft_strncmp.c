/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 17:24:04 by joslee            #+#    #+#             */
/*   Updated: 2020/03/06 17:31:31 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 두 문자열을 두번째 문자열의 지정한 길이만큼만을 비교하여 같은지 다른지 알려주는 함수
** 예를 들어,
** int i = ft_strncmp("josh", "josh", 2); 라고 사용하면 0을 반환한다. 문자열의 길이를 2로 지정했지만
** 첫번째 문자열에 정확히 같은 길이의 문자열이 있었기 때문에 두 문자열이 같다고 알려준다.
** 그러나 만약 두 문자열이 다음과 같고 "joshua" "josp", 길이가 4라면 반환되는 값은
** 'h'와 'p'의 ascii code 값의 차를 반환한다. 'j'는 104, 'a'는 112, 따라서 값은
** -8이 반환된다. 그러므로 0이 아닌 값이 반환될때는 두 문자열이 다르다는것을
** 확인할 수 있다. 비교하는 두 값은 부호없는 문자 (unsigned char)를 사용한다.
** strncmp함수는 string.h헤더파일에 선언되어 있다.
** 이 함수는 OS에 따라 동작방식이 다르다. windows에서는 문자열이 다를 때 1, -1, 0을
** 반환하지만, OS X, Linux에서는 ASCII Code값의 차이를 반환한다.
**
** The strncmp() function compares not more than n characters.  Because
** strncmp() is designed for comparing strings rather than binary data,
** characters that appear after a `\0' character are not compared.
*/

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
