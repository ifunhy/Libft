/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:59:10 by hyunjiki          #+#    #+#             */
/*   Updated: 2024/03/18 19:12:34 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	if ((!dst && !src))
		return (0);
	if (!dst && !size)
		return (ft_strlen(src));
	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= dst_len)
		return (size + src_len);
	while (src[i] != '\0' && size > (dst_len + i) + 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/*
#include <stdio.h>

int main()
{
	char dest[10] = "a";
	char src[50] = "lorem ipsum dolor sit amet";
	printf("%zu\n", ft_strlcat(dest, src, 0));
	return (0);
}*/
// ft_strlen 함수를 불러와 dst와 src의 길이 계산
// dst 뒤에 src를 붙여 총 길이가 size가 되도록 함
// size가 dst 길이보다 작다면 size + src의 길이를 리턴
// size가 dst 길이보다 크다면 널값 자리 빼고 총 길이가 size - 1 되로록 dst 뒤에 src 붙임
// 리턴 값은 (dst + src)의 길이
