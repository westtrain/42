/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 14:55:08 by joslee            #+#    #+#             */
/*   Updated: 2020/02/25 11:09:43 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 파일 디스크립터를 통해서 숫자를 문자로 변환하고 파일 안에 입력하는 함수.
** 인자로 받은 파일 디스크립터를 통해서 인자로 받은 숫자를 문자로 변환 후 파일에 입력한다.
** 파일 디스크립터에 0이 들어오면 표준 입력, 1이 들어오면 표준 출력, 2가 들어오면 표준 에러를 나타낸다.
** 
** The ft_putnbr_fd() function outputs a number to the output specified by
** the file descriptor. A file descriptor of 0, 1, or 2, refers to the standard
** input, standard output, or standard error, respectively.
*/

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd("-", fd);
			n = n * -1;
		}
		if (n > 9)
		{
			ft_putnbr_fd(n / 10, fd);
		}
		ft_putchar_fd(n % 10 + '0', fd);
	}
}
