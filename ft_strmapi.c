/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 13:10:52 by joslee            #+#    #+#             */
/*   Updated: 2020/02/20 13:14:13 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 빈 문자열을 만들고 인자로 받은 함수를 통해 인자로 받은 문자열을 빈 문자열에 복사하고
** 반환하는 함수. 
** 인자로 받은 함수에 따라 빈문자열에 인자로 받은 문자열 그대로 들어가거나 달라진 문자열을 
** 받게 될 수 있다. 
** 예를 들어,
** char *s = "Hello";
** char swap_str(unsigned int index, char *s);
** char *str = ft_strmap(s, &swap_str); 라고 한다면 새로운 문자열에는 "Hello"가
** swap_str함수를 index만큼 지나가면서 변형된다면 변형된 그대로 들어가게 된다.
** 새 문자열에 끝에는 반드시 '\0'을 넣어야 한다.
** 인자로 받은 문자열이나 함수가 NULL이라면 NULL을 반환한다.
** 
** Applies the function f to each character of the string passed as argument 
** by giving its index as first argument to create a “fresh” new string 
** (with malloc(3)) resulting from the suc- cessive applications of f.
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int 	i;
	char 			*str;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	str = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
