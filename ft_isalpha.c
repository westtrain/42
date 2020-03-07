/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 21:14:19 by joslee            #+#    #+#             */
/*   Updated: 2020/03/06 17:34:00 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 인자로 받은 문자가 알파벳 대소문자 중 하나인지 확인하는 함수이다.
** 예를 들어,
** int bool = ft_isalpha('A'); 라고 하게 되면 1이 반환됩니다.
** 그러나 unsigned char가 아니거나 EOF 값으로 표시되지 않는 인자가 들어가면 0을 반환한다.
** isalpha함수는 ctype.h헤더 파일에 선언되어 있다.
**
** The isalpha() function tests for any character for which isupper(3) or
** islower(3) is true.  The value of the argument must be representable as
** an unsigned char or the value of EOF.
*/

#include "libft.h"

int		isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
