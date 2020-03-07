/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcounter_delim.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 13:19:31 by joslee            #+#    #+#             */
/*   Updated: 2020/03/06 17:58:17 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcounter_delim(char const *s, char delim)
{
	int cnt;
	int i;

	cnt = 0;
	i = 0;
	while (s[i])
	{
		if ((s[i] != delim && s[i + 1] == delim) ||
				(s[i] != delim && s[i + 1] == '\0'))
			cnt++;
		i++;
	}
	return (cnt);
}
