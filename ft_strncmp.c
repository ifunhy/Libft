/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 18:04:12 by hyunjiki          #+#    #+#             */
/*   Updated: 2024/03/17 18:34:36 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (n > i && (s1[i] || s2[i]))
	{
		if ((unsigned char)s1[i] < (unsigned char)s2[i])
			return (-1);
		if ((unsigned char)s1[i] > (unsigned char)s2[i])
			return (1);
		i++;
	}
	return (0);
}
/*
int main()
{
	char str1[] = "test\200";
	char str2[] = "test\0";
	int n = 6;
	printf("%d\n", ft_strncmp(str1, str2, n));

	return (0);
}
*/
// s1과 s2의 문자열을 아스키 코드값으로  비교
// s1 < s2 -> 음수 반환
// s1 == s2 -> 0 반환
// s1 > s2 -> 양수 반환
