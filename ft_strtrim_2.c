/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 18:57:45 by hyunjiki          #+#    #+#             */
/*   Updated: 2024/03/18 18:55:03 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	end;

	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (ft_strchr(set, s1[end - 1]) && start < end)
		end--;
	return (ft_substr(s1, start, end - start));
}
/*
#include <stdio.h>

int main()
{
	char str[] = "abcdaabefgfdgg";
	char set[] = "abgf";
	printf("%s\n", ft_strtrim(str, set));
	return (0);
}*/
