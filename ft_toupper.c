/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 22:40:34 by joslee            #+#    #+#             */
/*   Updated: 2020/03/06 17:20:42 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 인자로 받은 소문자 알파벳을 대문자로 변환하는 함수이다.
** 예를 들어,
** int c = ft_tolower('a'); 라고 하게 되면 65(A)이 반환된다.
** ASCII CODE 97 부터 122번 안에 있지 않는 인자가 들어가면 받은 인자를 그대로 반환한다.
** tolower함수는 ctype.h헤더 파일에 선언되어 있다.
**
** The toupper() function converts a lower-case letter to the corresponding
** upper-case letter.  The argument must be representable as an unsigned
** char or the value of EOF.+
** Although the toupper() function uses the current locale, the toupper_l()
** function may be passed a locale directly. See xlocale(3) for more infor-
** mation.
*/

#include "libft.h"

int		ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
