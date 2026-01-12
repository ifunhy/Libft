/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 18:28:59 by hyunjiki          #+#    #+#             */
/*   Updated: 2024/03/14 22:36:40 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	ft_itoa_len(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_make_a(size_t len, long long num, char *str)
{
	if (num < 0)
	{
		num = -num;
		str[0] = '-';
	}
	else if (num == 0)
		str[0] = '0';
	str[len] = '\0';
	while (num)
	{
		len--;
		str[len] = num % 10 + '0';
		num = num / 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	size_t		len;
	long long	num;
	char		*str;

	len = ft_itoa_len(n);
	str = (char *) malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	num = (long long) n;
	ft_make_a(len, num, str);
	return (str);
}
/*
#include <stdio.h>

int main()
{
	printf("%s\n", ft_itoa(123456778));
	return (0);
}
*/
// malloc 사용하여 할당하고 인수로 받은 정수를 나타내는 문자열 반환, 음수 처리 필요

// n: 변환할 정수
// 반환값: 정수를 나타내는 문자열, 할당 실패시 NULL
