/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 13:56:13 by hyunjiki          #+#    #+#             */
/*   Updated: 2024/03/18 18:52:28 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	if (!dest && !src)
		return (0);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int main()
{
	char dest[10] = "abcdefg";
	char src[] = "123";
	printf("%s\n", (char *)ft_memcpy(dest, src, sizeof(src) - 1));
	printf("%s\n", dest);
}
*/
// 매개변수: dest 주소, src 주소, 복사할 크기
// 기능: dest에 src를 크기만큼 복사
// 반환값: 복사된 dest
// 주의사항: strcpy와 다르게 널이 들어가도 복사
//
// src에 저장되어 있는 값을 n만큼 복사하여 dst의 시작주소부터 붙여넣은 후 그 주소를 반환
// 각 메모리가 오버랩 되어서는 안되며, 그럴 경우인 memcpy 대신 memmove 사용해야 함
