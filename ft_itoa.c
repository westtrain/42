/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 11:42:03 by joslee            #+#    #+#             */
/*   Updated: 2020/02/25 12:46:23 by joslee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 인자로 받은 숫자를 문자열로 변환 후 새로만든 빈 문자열 포인터에 담아 반환하는 함수.
** 인자로 받은 숫자의 길이를 재고 새 문자열을 만들때 사용한다. 만들어진 빈 문자열의 끝에 '\0'을 넣고
** 역순으로 숫자의 뒷자리부터 첫자리까지 문자로 변환해서 넣는다. 만약 인자로 받은 숫자가 음수라면,
** 빈 문자열을 만들때 길이를 하나 더해주고 숫자는 양수로 치환한다. 그리고 모든 숫자가 역순으로 들어가면
** '-'를 문자열의 가장 첫번째 주소에 넣는다. 문자열 포인트를 만들기를 실패했다면 NULL을 반환한다.
** 
** Allocate (with malloc(3)) and returns a “fresh” string end- ing with ’\0’ 
** representing the integer n given as argument. Negative numbers must be supported. 
** If the allocation fails, the function returns NULL.
*/

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		neg;

	neg = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_ndigits(n);
	if (n < 0)
	{
		n *= -1;
		neg = 1;
		len++;
	}
	if (!(str = ft_memalloc(len+1)))
		return (NULL);
	while (len-- > 0)
	{
		str[len] = n % 10 + '0';
		n /= 10;
	}
	if (neg)
		str[0] = '-';
	return (str);
}
