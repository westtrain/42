/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 22:48:03 by joslee            #+#    #+#             */
/*   Updated: 2020/03/06 17:34:31 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 인자로 받은 대문자 알파벳을 소문자로 변환하는 함수이다.
** 예를 들어,
** int c = ft_tolower('A'); 라고 하게 되면 97(a)이 반환된다.
** ASCII CODE 65 부터 90번 안에 있지 않는 인자가 들어가면 받은 인자를 그대로 반환한다.
** tolower함수는 ctype.h헤더 파일에 선언되어 있다.
**
** The tolower() function converts an upper-case letter to the corresponding
** lower-case letter.  The argument must be representable as an unsigned
** char or the value of EOF.
** Although the tolower() function uses the current locale, the tolower_l()
** function may be passed a locale directly. See xlocale(3) for more infor-
** mation.
*/

#include "libft.h"

int		ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
