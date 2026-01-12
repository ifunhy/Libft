/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 13:12:53 by hyunjiki          #+#    #+#             */
/*   Updated: 2024/02/29 19:03:34 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *) s;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

/*int main()
{
	char s[10] = "abcdefg";
	printf("%s\n", s);
	ft_bzero(s, 4);
	for (int i = 0; i < 9; i++)
		printf("%c", s[i]);
	printf("\n");
}
*/
// 매개변수: 메모리 시작 주소, 크기
// 기능: 메모리를 0으로 초기화
// 반환값: 없음
//
// memset과 똑같이 작동하지만 오로지 \0으로만 채울 수 있음
// 다만 리턴값 없이 단순히 메모리를 0으로 초기화하는 용도
