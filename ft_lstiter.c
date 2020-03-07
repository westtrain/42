/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 19:39:15 by joslee            #+#    #+#             */
/*   Updated: 2020/03/04 15:45:39 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 
** Iterates the list lst and applies the function f to each link.
*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list *temp;

	while (lst)
	{
		temp = lst->next;
		f(lst);
		lst = temp;
	}
}
