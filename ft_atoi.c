/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 20:22:43 by joslee            #+#    #+#             */
/*   Updated: 2020/03/06 17:36:12 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 문자열속 숫자를 정수로 변환해 반환하는 함수. atoi(ASCII string to interger 약자)
** 예를 들어,
** int number = ft_atoi("   -123fsdf"); 이와 같이 실행하면 -123의 값을 number라는 변수가
** 갖게 된다. 이처럼 문자열 속에 숫자 이후의 문자들은 변환하지 않는다.
** 그러나 문자열속의 숫자가 특수 문자(-, + 예외), 알파벳등로 시작하면 정수로 변환하지 않고 0을 반환한다.
** atoi함수는 stdlib.h헤더파일에 선언되어 있다.
**
** The atoi() function converts the initial portion of the string pointed to
** by str to int representation.
*/

#include "libft.h"

int		ft_atoi(const char *str)
{
	int						sign;
	unsigned long long		num;

	num = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	if (num >= 9223372036854775808ULL)
		return (sign == 1 ? -1 : 0);
	return (num * sign);
}
