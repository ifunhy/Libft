/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:25:56 by hyunjiki          #+#    #+#             */
/*   Updated: 2024/03/18 17:19:41 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	j;
	size_t	little_len;

	j = 0;
	if (!big && len == 0)
		return (0);
	if (little[0] == 0 && len == 0)
		return ((char *)big);
	little_len = ft_strlen(little);
	while (big[j] && little_len + j <= len)
	{
		if (!ft_strncmp(&big[j], little, little_len))
		{
			return ((char *)&big[j]);
		}
		j++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	char a[40] = "lorem ipsum dolor sit amet";
	char b[10] = "dolor";
	printf("찾은 문자열: %s\n", ft_strnstr(a, b, 18));
}
*/
// big에서 찾을 문자열이 없는 경우(= little이 빈 경우) -> big 반환
// big 안에 little이 존재할 경우 -> little 리턴, 포인터로 big 시작부터 끝까지
// big 안에 little 없는 경우 ->  NULL 리턴
// big 안에 little이 len번째 안에 다 존재하지 않을 경우 -> NULL 리턴
// little의 첫 글자와 같은 글자인데 뒷 글자가 같지 않을 경우 -> 건너뛰기

// 빈 문자열이거나 길이가 0이면 작동 x
