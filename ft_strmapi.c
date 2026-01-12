/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 19:15:34 by hyunjiki          #+#    #+#             */
/*   Updated: 2024/03/18 10:35:15 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*str;

	if (!s || !f)
		return (0);
	len = ft_strlen(s);
	i = 0;
	str = (char *) malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (0);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>

char f(unsigned int i, char c)
{
	return (c + i);
}

int main()
{
	char str1[] = "aaa";
	char* str2;
	str2 = ft_strmapi(str1, *f);
	printf("%s\n", str2);
}
*/
// 함수 'f'를 문자열 's'의 각 문자에 적용하고 해당 인덱스를 첫 번째 인수로 전달하여 
// 'f'를 연속적으로 적용한 결과로 malloc을 사용하여 새 문자열을 만듦

// s: 반복할 문자열
// f: 각 문자에 적용할 함수
// 반환값: 없음
