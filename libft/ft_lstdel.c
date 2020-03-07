/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 14:03:21 by joslee            #+#    #+#             */
/*   Updated: 2020/03/04 16:41:08 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 
** Takes as a parameter the adress of a pointer to a link and frees 
** the memory of this link and every successors of that link using 
** the functions del and free(3). Finally the pointer to the link 
** that was just freed must be set to NULL 
** (quite similar to the function ft_memdel from the mandatory part).
*/

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *node;
	t_list *temp;

	node = *alst;
	while (node)
	{
		temp = node->next;
		ft_lstdelone(&node, del);
		node = temp;
	}
	*alst = NULL;
}
