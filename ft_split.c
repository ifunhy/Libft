/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:21:52 by hyunjiki          #+#    #+#             */
/*   Updated: 2024/03/14 18:28:41 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_free(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return ;
}

char	*ft_word_ncpy(char *str, const char *s, size_t start, size_t end)
{
	size_t	i;

	i = 0;
	while (start < end)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}

void	ft_word_len(char const *s, char c, char **str)
{
	size_t	start;
	size_t	end;
	size_t	i;

	end = 0;
	i = 0;
	while (s[end])
	{
		if (s[end] != c && s[end])
		{
			start = end;
			while (s[end] != c && s[end])
				end++;
			str[i] = (char *) malloc(sizeof(char) * (end - start + 1));
			if (str[i] == NULL)
			{
				ft_free(str);
				return ;
			}
			ft_word_ncpy(str[i], s, start, end);
			i++;
		}
		else if (s[end])
			end++;
	}
}

size_t	ft_word_count(char const *s, char c)
{
	size_t	wc;
	size_t	i;

	wc = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			wc++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (wc);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	i;

	if (!s && !c)
		return (0);
	i = ft_word_count(s, c);
	str = (char **) malloc(sizeof(char *) * (i + 1));
	if (str == NULL)
		return (0);
	str[i] = NULL;
	ft_word_len(s, c, str);
	return (str);
}
/*
#include <stdio.h>

int main()
{
	char str[] = ",,,abc,de,fg,,,,,,";
	char c = ',';
	char **spl = ft_split(str,c);
	for (int i=0; spl[i]; i++)
		printf("%s\n", spl[i]);
	return (0);
}*/
