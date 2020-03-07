/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 12:57:47 by joslee            #+#    #+#             */
/*   Updated: 2020/02/20 13:00:57 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 인자로 받은 문자열을 인자로 받은 함수안에서 문자열의 끝까지 돌도록 만드는 함수.
** 예를 들어, 
** void swap_str(unsigned int index, char *s); - 예시로 만든 함수. 어떤 함수든 들어갈 수 있다.
** ft_striter("Hello", &swap_str); 라고 한다면 "Hello"라는 문자열이 
** swap_str함수를 통해서 index만큼 다른 문자열과 교체되어 다른 문자열을 같도록 만든다. 
** 
** Applies the function f to each character of the string passed as argument, 
** and passing its index as first argument. 
** Each character is passed by address to f to be modified if necessary.
*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int i;

	if (s != NULL && f != NULL)
	{
		i = 0;
		while (s[i] != '\0')
		{
			f(i, s + i);
			i++;
		}
	}
}
