/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 22:23:25 by joslee            #+#    #+#             */
/*   Updated: 2020/03/06 17:38:02 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 인자가 ASCII CODE 중 출력 가능한 문자(화면에 표시되는)인지 확인하는 함수이다.
** 예를 들어,
** int bool = ft_isprint('*'); 라고 하게 되면 1이 반환됩니다.
** ASCII CODE 32 부터 126번 안에 있지 않는 인자가 들어가면 0을 반환한다.
** isdigit함수는 ctype.h헤더 파일에 선언되어 있다.
**
** The isprint() function tests for any printing character, including space
** (` ').  The value of the argument must be representable as an unsigned
** char or the value of EOF.
*/

#include "libft.h"

int		ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
