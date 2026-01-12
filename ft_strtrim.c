/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 18:19:03 by hyunjiki          #+#    #+#             */
/*   Updated: 2024/03/18 18:56:04 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	ft_start(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i] && set[j])
	{
		if (s1[i] == set[j])
		{
			i++;
			j = 0;
		}
		else
			j++;
	}
	return (i);
}

size_t	ft_end(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = (int)ft_strlen(s1) - 1;
	j = (int)ft_strlen(set) - 1;
	while (i >= 0 && j >= 0)
	{
		if (s1[i] == set[j])
		{
			i--;
			j = ft_strlen(set) - 1;
		}
		else
			j--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*temp;

	if (s1[0] == '\0')
		return (ft_strdup(""));
	start = ft_start(s1, set);
	end = ft_end(s1, set);
	if (end < start)
		return (ft_strdup(""));
	temp = (char *) malloc(sizeof(char) * (end - start) + 2);
	if (temp == NULL)
		return (NULL);
	i = 0;
	while (i < (end - start + 1))
	{
		temp[i] = s1[start + i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}
/*
#include <stdio.h>

int main()
{
	char str[] = "aaaaaaaaaaa";
	char set[] = "a";
	printf("[%s]\n", ft_strtrim(str, set));
	return (0);
}*/
