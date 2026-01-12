/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:37:40 by hyunjiki          #+#    #+#             */
/*   Updated: 2024/03/18 18:53:18 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*temp;

	i = 0;
	temp = (char *) malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (temp == NULL)
		return (0);
	while (i < ft_strlen(s))
	{
		temp[i] = s[i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char *string = "this is a copy";
	char *newstr;
	// Make newstr point to a duplicate of string
	if ((newstr = ft_strdup(string)) != NULL)
		printf("The new string is: %s\n", newstr);
	return 0;
}
*/
