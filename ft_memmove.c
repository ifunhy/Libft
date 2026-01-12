/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 16:59:03 by hyunjiki          #+#    #+#             */
/*   Updated: 2024/03/18 15:55:54 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*destination;
	unsigned char	*source;
	size_t			i;

	if (!src && !dest)
		return (NULL);
	destination = (unsigned char *) dest;
	source = (unsigned char *) src;
	i = 0;
	while (i < n)
	{
		if (dest < src)
			destination[i] = source[i];
		else if (dest >= src)
			destination[n - 1 - i] = source[n - 1 - i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int main()
{
	char str[] = "12345";
	ft_memmove(str + 2, str, 3);
	printf("%s\n", str);
	return (0);
}
*/
// 매개변수: dest, src, 이동할 크기
// 기능: 메모리 블록을 옮김
// 반환값: dest 시작 주소 반환
// 주의사항: dest와 src의 메모리 값을 잘 비교하고 옮겨야 함
// 	     겹쳐있다면 복사를 시작하는 지점(앞, 뒤)에 따라 값이 달라지기 때문
//
// memcpy와 같은 기능을 수행하지만, 메모리가 overlap 되어 있을 경우를 생각하여 
// src의 데이터를 src나 dest와 overlap 되지 않는 곳에 카피해 놓은 후에 dest로 복사하는 과정을 거침

// src와 dest가 둘 다 null이라면 null 반환
// dest < src 라면, 앞에서부터 복사 (뒤에서부터 복사하면 맨 뒤의 값만 복사됨)
// dest >= src 라면, 뒤에서부터 복사 (앞에서부터 복사하면 맨 앞의 값만 복사됨)
