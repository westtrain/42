/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 22:48:12 by joslee            #+#    #+#             */
/*   Updated: 2020/03/05 14:38:57 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 
** Takes as a parameter a link’s pointer address and frees 
** the memory of the link’s content using the function del given 
** as a parameter, then frees the link’s memory using free(3).
** The memory of next must not be freed under any circumstance. 
** Finally, the pointer to the link that was just freed must be set to NULL 
** (quite similar to the function ft_memdel in the mandatory part).
*/

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list *temp;

	temp = *alst;
	del(temp->content, temp->content_size);
	free(*alst);
	*alst = NULL;
}
