/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:54:06 by hyunjiki          #+#    #+#             */
/*   Updated: 2024/03/14 23:10:28 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	chr;
	unsigned char	*str;

	i = 0;
	chr = (unsigned char) c;
	str = (unsigned char *) s;
	while (i < n)
	{
		str[i] = chr;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>

int main()
{
	char str[] = "abcdefg";
	memset(str, '*', 3  * sizeof(char));
	printf("%s\n", str);	// ***defg
}
*/
// 매개변수: 메모리 시작 주소, 초기화 값, 크기
// 기능: 메모리를 특정 값으로 초기화
// 반환값: 초기화한 메모리 시작 주소
// 주의사항: 초기화 값이 int 형이지만 내부에서 unsigned char 로 변환
//
// void형 포인터 s가 가리키고 있는 메모리 주소의 처음 위치부터 n바이트만큼에
// 저장되어 있는 값을 상수 c로 채우고, 원래 포인터 s의 값을 리턴
// s가 가리키는 주소는 같지만 주소에 저장되어 있는 값은 바뀜
