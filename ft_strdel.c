/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 12:43:13 by joslee            #+#    #+#             */
/*   Updated: 2020/03/06 17:17:59 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 인자로 받은 문자열의 메모리를 해제하는 함수.
** 예를 들어,
** char *s = "hello";
** ft_strdel(&s); 라고 하면 포인터 s에는 있는 문자열을 지우고 문자열 길이만큼 할당된 메모리도
** 주소가 사라진다는 의미가 아니다. 주소는 남아 있고 그 안에 있는 내용과 크기가 없어진다.
** 그러므로 그 메모리 주소에 NULL을 넣어줘야 한다.
**
** Takes as a parameter the address of a string that need
** to be freed with free(3), then sets its pointer to NULL.
*/

#include "libft.h"

void	ft_strdel(char **as)
{
	if (as != NULL)
	{
		free(*as);
		*as = NULL;
	}
}
