/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_delim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 13:08:57 by joslee            #+#    #+#             */
/*   Updated: 2020/03/06 17:57:33 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlen_delim(char const *s, int pos, char delim)
{
	int len;

	len = 0;
	while (s[pos] != delim && s[pos])
	{
		pos++;
		len++;
	}
	return (len);
}
