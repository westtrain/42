/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 21:47:06 by joslee            #+#    #+#             */
/*   Updated: 2020/02/22 21:49:36 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Outputs the character c to the standard output.
 * write(2) function from unistd.h header.
 */

#include "libft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
