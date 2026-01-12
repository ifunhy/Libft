/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:19:12 by hyunjiki          #+#    #+#             */
/*   Updated: 2024/03/14 18:04:10 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	chr;
	unsigned char	*src;

	i = 0;
	chr = (unsigned char) c;
	src = (unsigned char *)s;
	while (i < n)
	{
		if (src[i] == chr)
			return (&src[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int main()
{
	char str[] = "a3\0\n4bdefg";
	printf("%s\n",(char *)ft_memchr(str, 'c', 7));
	return (0);
}
*/
// s가 가리키는 메모리의 처음 n 바이트 중에서 처음으로 c와 일치하는 값의 주소를 리턴
// 인자
// s: 검색을 수행할 부분의 시작 주소
// c: 찾을 값, int로 값이 전달되지만 함수 내부적으로는 한 바이트씩 비교하기 때문에 
// 이 값은 unsigned char 로 변환되어 사용 + null이 들어오는 것도 생각해야 함
// n: 검색을 시작한 부분부터 검색을 수행할 만큼의 바이트 수
// 리턴값: 메모리 블록에서 value와 일치하는 값이 있다면 그 곳의 주소를 리턴, 찾지 못하면 NULL 리턴

// c의 값을 unsigned char 로 변환
// 배열을 탐색할 size_t i;
// i < n 만큼 반복하여 검색
