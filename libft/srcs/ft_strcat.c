/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 19:53:50 by joslee            #+#    #+#             */
/*   Updated: 2020/02/19 19:58:03 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	int i = 0;
	int j = 0;
	unsigned char* ptr1;
	unsigned char* ptr2;

	ptr1 = (unsigned char*)s1;
	ptr2 = (unsigned char*)s2;
	while (ptr1[i])
		i++;
	while (ptr2[j])
	{
		ptr1[i] = ptr2[j];
		i++;
		j++;
	}
	ptr1[i] = '\0';
	return (s1);
}
