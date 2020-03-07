/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 12:50:51 by joslee            #+#    #+#             */
/*   Updated: 2020/03/06 17:15:36 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 인자로 받은 문자열을 인자로 받은 함수안에서 문자열의 끝까지 돌도록 만드는 함수.
** 예를 들어,
** void swap_str(char *s); - 예시로 만든 함수. 어떤 함수든 들어갈 수 있다.
** ft_striter("Hello", &swap_str); 라고 한다면 "Hello"라는 문자열이
** swap_str함수를 통해서 다른 문자열과 교체되어 다른 문자열을 같도록 만든다.
**
** Applies the function f to each character of
** the string passed as argument.
** Each character is passed by address to f to be modified if necessary.
*/

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	if (s != NULL && f != NULL)
	{
		while (*s)
			f(s++);
	}
}
