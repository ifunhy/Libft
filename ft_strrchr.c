/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:28:13 by hyunjiki          #+#    #+#             */
/*   Updated: 2024/03/17 17:10:27 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	char			*str;
	unsigned char	chr;

	i = ft_strlen(s);
	str = (char *) s;
	chr = (unsigned char) c;
	if (str[0] == c)
		return (&str[0]);
	while (i > 0)
	{
		if (str[i] == chr)
			return (&str[i]);
		i--;
	}
	return (0);
}
/*
#include <stdio.h>

int	main()
{
	char str[] = "bonjour";
	char c = 'b';
	printf("%s\n", ft_strrchr(str, c));
}
*/
// 매개변수: 대상 문자열, 특정값
// 기능: 문자 검색(마지막 표시)
// 반환값: 있으면 그 주소, 없으면 0

// 문자열 s에서 문자 c를 뒤에서부터 탐색하여 가장 처음 발견하는 곳의 위치를 포인터로 반환
// 찾지 못한 경우 NULL 반환
