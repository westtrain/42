/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 22:15:26 by joslee            #+#    #+#             */
/*   Updated: 2020/03/06 17:26:32 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 인자가 ASCII CODE 중 하나인지 확인하는 함수이다.
** 예를 들어,
** int bool = ft_isascii('*'); 라고 하게 되면 1이 반환됩니다.
** ASCII CODE 0 부터 127번 안에 있지 않는 인자가 들어가면 0을 반환한다.
** isdigit함수는 ctype.h헤더 파일에 선언되어 있다.
**
** The isascii() function tests for an ASCII character, which is any charac-
** ter between 0 and octal 0177 inclusive.
*/

#include "libft.h"

int		ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
