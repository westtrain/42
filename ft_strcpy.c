/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 17:30:31 by joslee            #+#    #+#             */
/*   Updated: 2020/02/19 17:31:54 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 인자로 받은 두번째 문자열을 첫번째 문자열에 복사하는 함수.
** 예를 들어, 
** char *str = ft_strcpy("Hello", "World"); 라고 한다면 결과 값은 "World"가 된다.
** 복사후 문자열의 끝에는 반드시 '\0'을 넣는다.
** 이 함수는 문자열의 복사 과정에서 중복을 허용한다.
** 
** The stpcpy() and strcpy() functions copy the string src to dst (including
** the terminating `\0' character.)
** The stpncpy() and strncpy() functions copy at most len characters from
** src into dst.  If src is less than len characters long, the remainder of
** dst is filled with `\0' characters.  Otherwise, dst is not terminated.
** The source and destination strings should not overlap, as the behavior is
** undefined.
*/

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
    int i = 0;
	unsigned char* ptr1;
    unsigned char* ptr2;

    ptr1 = (unsigned char*)dst;
    ptr2 = (unsigned char*)src;
    while (ptr2[i])
    {
        ptr1[i] =  ptr2[i];
        i++;        
    }
    ptr1[i] = '\0';
    return (dst);
}
