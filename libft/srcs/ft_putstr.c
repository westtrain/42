/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 22:41:09 by joslee            #+#    #+#             */
/*   Updated: 2020/02/22 22:42:22 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Outputs the string s to the standard output.
 * write(2) function from unistd.h header.
 */

#include "libft.h"

void	ft_putstr(char const *s)
{
	while (*s)
	{
		ft_putchar(*s);
		s++;
	}
}
