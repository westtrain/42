/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 12:40:28 by joslee            #+#    #+#             */
/*   Updated: 2020/02/20 12:45:47 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 빈 문자열을 인자로 받은 길이만큼 새로 만들고 반환하는 함수.
** 예를 들어, 
** char *str = ft_strnew(5); 라고 한다면 길이가 5인 문자열을 만들고 끝에 '\0'을 넣고 반환한다.
** 만약 메모리 할당을 실패하면 NULL을 반환한다. 
** 
** Allocates (with malloc(3)) and returns a “fresh” string end- ing with ’\0’.
** Each character of the string is initialized at ’\0’.
** If the allocation fails the function returns NULL.
*/

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *str;

	str = ft_memalloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	return (str);
}
