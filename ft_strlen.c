/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 17:17:01 by joslee            #+#    #+#             */
/*   Updated: 2020/03/06 17:27:00 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 문자열의 길이를 반환하는 함수.
**
** The strlen() function computes the length of the string s.  The strnlen()
** function attempts to compute the length of s, but never scans beyond the
** first maxlen bytes of s.
*/

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
