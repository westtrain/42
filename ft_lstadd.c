/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 19:25:41 by joslee            #+#    #+#             */
/*   Updated: 2020/03/07 15:05:33 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 인자로 받은 리스트를 전체 리스트의 앞에 더하는 함수.
**
** Adds the element new at the beginning of the list.
*/

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	new->next = *alst;
	*alst = new;
}
