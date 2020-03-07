/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 22:11:18 by joslee            #+#    #+#             */
/*   Updated: 2020/03/06 18:19:09 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 인자로 받은 문자가 0 부터 9 또는 알파벳 대소문자 중 하나인지 확인하는 함수이다.
** 예를 들어,
** int bool = ft_isalnum('9'); 혹은 = ft_isalnum('A')라고 하게 되면 1이 반환됩니다.
** 그러나 unsigned char가 아니거나 EOF 값으로 표시되지 않는 인자가 들어가면 0을 반환한다.
** isdigit함수는 ctype.h헤더 파일에 선언되어 있다.
**
** The isalnum() function tests for any character for which isalpha(3) or
** isdigit(3) is true.  The value of the argument must be representable as
** an unsigned char or the value of EOF.
*/

#include "libft.h"

int		ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
			|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}
