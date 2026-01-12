/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:19:42 by hyunjiki          #+#    #+#             */
/*   Updated: 2024/03/14 17:20:10 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int main()
{
	char s1[] = "abcdef";
	char s2[] = "abcdhj";
	printf("%d\n", ft_memcmp(s1, s2, 7));
	return (0);
}
*/
// s1, s2 를 비교하여 값을 리턴
// s1, s2: 메모리 블록을 가리키는 포인터
// n: 비교할 바이트 수
// 리턴값: s1과 s2가 같다면 0 리턴, 다르다면 s1 - s2 리턴

// 인덱스 위치 이동할 size_t i;
// s1, s2를 unsigned char *로 캐스팅
// 비교할 n이 0이면 0 리턴
