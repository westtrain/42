/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 14:17:43 by joslee            #+#    #+#             */
/*   Updated: 2020/02/20 14:41:51 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;

	i = 0;
	if (*needle == "")
		return (haystack);
	while (haystack[i])
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			i++;
			j++;
		}
		else
			i++;
		if (needle[j] == '\0')
			return (&haystack[i - j]);
	}
	return (NULL);
}

int		main(void)
{
	char *str1 = "abcdzefabzzzcef";
	char *str2 = "zzz";

	printf("%s\n", ft_strstr(str1, str2));
	return (0);
}
