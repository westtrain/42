/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 14:26:46 by joslee            #+#    #+#             */
/*   Updated: 2020/02/23 14:38:46 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * 파일 디스크립터를 통해서 문자를 입력하는 함수.
 * 인자로 받은 파일 디스크립터를 통해서 인자로 받은 문자를 파일에 입력한다.
 * 파일 디스크립터에 0이 들어오면 표준 입력, 1이 들어오면 표준 출력, 2가 들어오면 표준 에러를 나타낸다.
 * 
 * The ft_putchar_fd() function outputs the character c to the specified file
 * descriptor. A file descriptor of 0, 1, or 2, refers to  the standard input,
 * standard output, or standard error, respectively.
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
