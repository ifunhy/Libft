/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 18:13:41 by hyunjiki          #+#    #+#             */
/*   Updated: 2024/03/14 18:18:48 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*temp;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	temp = (char *) malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (temp == NULL)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		temp[i] = s1[i];
		i++;
	}
	while (j < ft_strlen(s2))
	{
		temp[i] = s2[j];
		i++;
		j++;
	}
	temp[i] = '\0';
	return (temp);
}
/*
#include <stdio.h>

int main()
{
	char str1[] = "1234";
	char str2[] = "5678";
	printf("%s\n", ft_strjoin(str1, str2));
	return (0);
}
*/
