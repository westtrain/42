/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 13:42:03 by joslee            #+#    #+#             */
/*   Updated: 2020/03/07 15:01:42 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 새로운 리스트를 만드는 함수.
** 새 리스트안에는 인자로 받은 content_size 만큼 메모리를 할당해서
** 리스트안의 content의 포인터를 만들고 인자로 받은 content를 채운다.
** 예를 들어,
** t_list *new;
** new = ft_lstnew("abcd", 4); 라고 한다면 새로운 리스트인 new안에
** "abcd"라는 문자열과 문자열의 크기가 담긴다.
** 그리고 새 리스트는 NULL을 가리키도록 한다.
** 만약 메모리 할당이 실패하면, NULL을 반환한다.
** 인자로 들어오는 content가 NULL이라면 새로 만든 리스트안 content는
** NULL을 넣고 사이즈는 0로 만든다.
**
** Allocates (with malloc(3)) and returns a “fresh” link.
** The variables content and content_size of the new link are initialized
** by copy of the parameters of the function.
** If the parameter content is nul, the variable content is initialized
** to NULL and the variable content_size is initialized to 0
** even if the parameter content_size isn’t.
** The variable next is initialized to NULL.
** If the allocation fails, the function returns NULL.
*/

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list *node;

	if (!(node = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		node->content = NULL;
		node->content_size = 0;
	}
	else
	{
		node->content = malloc(content_size);
		if (!node->content)
		{
			free(node);
			return (NULL);
		}
		ft_memcpy(node->content, content, content_size);
		node->content_size = content_size;
	}
	node->next = NULL;
	return (node);
}
