/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 19:42:53 by joslee            #+#    #+#             */
/*   Updated: 2020/03/04 16:23:53 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 
** Iterates a list lst and applies the function f to each link 
** to create a “fresh” list (using malloc(3)) resulting from 
** the successive applications of f. If the allocation fails, 
** the function returns NULL.
*/

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *node;
	t_list *temp;

	if (!lst || !f)
		return (NULL);
	temp = f(lst);
	node = temp;
	while (lst->next)
	{
		lst = lst->next;
		if (!(temp->next = f(lst)))
		{
			free(temp->next);
			return (NULL);
		}
		temp = temp->next;
	}
	return (node);
}
