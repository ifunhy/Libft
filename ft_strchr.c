/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 18:03:14 by hyunjiki          #+#    #+#             */
/*   Updated: 2024/03/17 16:51:08 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	str = (char *) s;
	if (c == '\0')
	{
		j = ft_strlen(s);
		return (&str[j]);
	}
	while (str[i])
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	return (0);
}

#include <stdio.h>

int	main()
{
	char str[] = "bonjour";
	char c = 'j';
	printf("%s\n", ft_strchr(str, c));
}

// 매개변수: 대상 문자열, 특정값
// 기능: 문자 검색
// 반환값: 있으면 그 주소, 없으면 0
//
// 문자열 s에서 문자 c를 탐색하여 가장 처음 발견하는 곳의 위치를 포인터로 반환
// 찾지 못한 경우 NULL 반환
