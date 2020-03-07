/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 22:56:38 by joslee            #+#    #+#             */
/*   Updated: 2020/03/06 17:16:36 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 인자로 받은 숫자를 문자로 변환해 화면에 출력하는 함수이다.
** int의 Value range가 -2,147,483,648 to 2,147,483,647이라서 -2,147,483,648가 들어오면
** overflow가 되기 때문에 잘못된 결과를 출력할 수 있다. 그래서 -2,147,483,648도 출력될 수 있게 만들어야 한다.
**
** Outputs the integer n to the standard output.
*/

#include "libft.h"

void	ft_putnbr(int n)
{
	char c;

	if (n == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(n * -1);
	}
	else
	{
		if (n >= 10)
			ft_putnbr(n / 10);
		c = n % 10 + '0';
		ft_putchar(c);
	}
}
