/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 17:21:52 by joslee            #+#    #+#             */
/*   Updated: 2020/02/19 17:27:34 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 인자로 받은 문자열과 똑같은 크기의 문자열을 만들고 복사 후 반환하는 함수.
** 예를 들어, 
** char *s = "Hello";
** char *str = ft_strdup(s); 라고 한다면 크기가 5인 str의 포인터 변수안에
** "Hello"를 복사해 넣고 그 포인터의 시작점을 반환한다. 
** 반드시 문자열의 끝에 '\0'을 넣는다.
** 만약 메모리 할당에 실패했다면, NULL을 반환한다.
** 
** The strdup() function allocates sufficient memory for a copy of 
** the string s1, does the copy, and returns a pointer to it.  The pointer may
** subsequently be used as an argument to the function free(3).
** If insufficient memory is available, NULL is returned and errno is set to
** ENOMEM.
** The strndup() function copies at most n characters from the string s1
** always NUL terminating the copied string
*/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(s1);
	ptr = (char*)malloc(sizeof(*s1) * (len + 1));
	if (!ptr)
		return (NULL);
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}